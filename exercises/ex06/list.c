/* Example code for Exercises in C.

Based on an example from http://www.learn-c.org/en/Linked_lists

Copyright 2016 Allen Downey
License: Creative Commons Attribution-ShareAlike 3.0

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *next;
} Node;

/* Makes a new node structure.
*
* val: value to store in the node.
* next: pointer to the next node
*
* returns: pointer to a new node
*/
Node *make_node(int val, Node *next) {
    Node *node = malloc(sizeof(Node));
    node->val = val;
    node->next = next;
    return node;
}


/* Prints the values in a list.
*
* list: pointer to pointer to Node
*/
void print_list(Node **list) {
    Node *current = *list;

    printf("[ ");
    while (current != NULL) {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("]\n");
}


/* Removes and returns the first element of a list.
*
* list: pointer to pointer to Node
*
* returns: int or -1 if the list is empty
*/
int pop(Node **list) {
    Node *current = *list;
    if(current == NULL){
        return -1;
    }
    else{
        *list = current->next;
        return current->val;
        free(current);
    }
}


/* Adds a new element to the beginning of the list.
*
* list: pointer to pointer to Node
* val: value to add
*/
void push(Node **list, int val) {
    Node* current = *list;
    Node* addedOne = malloc(sizeof(Node));
    addedOne->val = val;
    addedOne->next = current;
    *list = addedOne;
}

/* Handles recursion for removeVal as well as removal
 * of the identified val if found.
 * current: pointer to a Node
 * val: value to remove
 */
int removeValRecurse(Node* current,int val){
    if (current->next == NULL){
        return 0;
    } else if(current->next->val == val){
        current->next = current->next->next;
        return 1;
    } else{
        return removeValRecurse(current->next,val);
    }
}

/* Removes the first element with the given value
*
* Frees the removed node.
*
* list: pointer to pointer to Node
* val: value to remove
*
* returns: number of nodes removed
*/
int remove_by_value(Node **list, int val) {
    Node* current = *list;
    if(current->val == val){
        pop(list);
        return 1;
    } 
    return removeValRecurse(current,val);
}

/* Handles recursion as well as pointer reassignment
 * with the list and current Node passed as inputs
 * list: pointer to pointer to Node
 * currentNode: pointer to a Node 
 */

void reverseNode(Node** list,Node* currentNode){
    if(currentNode->next!=NULL){
        reverseNode(list,currentNode->next);
        currentNode->next->next = currentNode;
    } else{
        *list = currentNode;
    }
}

/* Reverses the elements of the list.
*
* Does not allocate or free nodes.
*
* list: pointer to pointer to Node
*/
void reverse(Node **list) {
    Node* current = *list;
    reverseNode(list,current);
    current->next = NULL;
}


int main() {
    Node *head = make_node(1, NULL);
    head->next = make_node(2, NULL);
    head->next->next = make_node(3, NULL);
    head->next->next->next = make_node(4, NULL);

    Node **list = &head;
    print_list(list);

    int retval = pop(list);
    print_list(list);

    push(list, retval+10);
    print_list(list);

    remove_by_value(list, 3);
    print_list(list);

    remove_by_value(list, 7);
    print_list(list);

    reverse(list);
    print_list(list);
}
