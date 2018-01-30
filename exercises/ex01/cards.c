#include<stdio.h>
#include<stdlib.h>

//This file contains code that counts cards, producing a count after each card is input until
//an X is input to signal the end of cards being input.

//Takes a card_name string as input and returns the integer value as long as the card_name is
//an integer between one and ten. Otherwise puts an error and returns zero.
int checkForRealVal(char card_name[]){
	int val;
	val = atoi(card_name);
	if((val<1)||(val>10)) {
		puts("I don't understand that value!");
		return 0;
	} else {
		return val;
	}
}

//valGet takes a card_name as input and returns 10 if the card is a K, Q, or J, 11 if the 
//card_name is A, 0 if the card_name is X, or otherwise returns the output of checkForRealVal()
//for the card_name
int valGet(char card_name[]) {
	switch(card_name[0]) {
		case 'K':
		case 'Q':
		case 'J':
			return 10;
			break;
		case 'A':
			return 11;
			break;
		case'X':
			return 0;
			break;
		default:
			return checkForRealVal(card_name);
	}
}

//checkVal takes an integer val and an integer count as input and outputs the incremented count
//if val is inclusively between three and seven, the decremented count if val is ten, and count
//otherwise
int checkVal(int val,int count){
	if ((val>2) && (val<7)) {
		return count+1;
	} else if (val == 10) {
		return count-1;
	} else {
		return count;
	}
}

//Takes a card_name as input and prints a count given all of the previous inputs, until an X
//is input as the card_name.
int main()
{
	char card_name[3];
	int count = 0;
	int val;
	while (card_name[0] != 'X') {
		puts("Enter the card name: ");
		scanf("%2s", card_name);
		val = valGet(card_name);
		if (val == 0) {
			continue;
		}
		count = checkVal(val,count);
		printf("Current count: %i\n", count);
	}
	return 0;
}

