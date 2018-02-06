/* An adder that takes any number of numbers up to 100, adds them to 
an array after converting from a string to an integer, and adds all of the
numbers from the array together as the sum. At any point, the user can stop
inputting numbers by pressing ctrl and D.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Sums up all of the numbers in the array based on the maximum number
//inputted by the user (i)
void addNums(int i,int array[]){
	int j = 0;
	int sum = 0;
	while (j<=i){
 		sum = sum + array[j];
 		j = j + 1;
 	}
 	printf("%d\n",sum);
}

//Takes an input from the user, sets the number of 
//inputted numbers, and calls addNums()
int main(){
	int array[100], max, res;
	int i = 0;
	while(1){
		char s[20];
		int num;
		res = scanf("%s",s);
		if(strlen(s)>19){
			perror("Error: maximum number of digits exceeded");
			exit(EXIT_FAILURE);
		}
		num = atoi(s);
		if(num == 0){
			perror("Error: non-integer value inputted");
			exit(EXIT_FAILURE);
		}
		array[i] = num;
		if (res == EOF) break;
		if(i == 100){
			perror("Error: maximum number of inputs exceeded");
			exit(EXIT_FAILURE);
		}
		i = i + 1;
	}
	i = i-1;
 	addNums(i,array);
}