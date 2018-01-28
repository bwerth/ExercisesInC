#include<stdio.h>
#include<stdlib.h>

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

int checkVal(int val,int count){
	if ((val>2) && (val<7)) {
		return count+1;
	} else if (val == 10) {
		return count-1;
	} else {
		return count;
	}
}

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

