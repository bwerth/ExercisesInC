#include <stdio.h>

int main() {
	//The command movl $5, -4(%rbp) moves the value of 5 into the rbp memory location
	int x = 5;
	int y = x + 1;
	//When the -O2 flag is added, optimization gets rid of the x definition assembly
	//because it is unused outside of the definition
    printf("Hello, World! %d\n",y);
    //When you add x to the printf, printf is called from assembly instead of puts because 
    //the printf is actually necessary. Also, when the -O2 flag is added the movl command to
    //assign the value of 5 into memory is actually executed in addition to the printf because
    //it is used in the printf.
    return 0;
    //When you define y as x plus one, the assembly code adds one to x, before defining y as 
    //the result. As with the previous test, the printf is used instead of puts. When the -O2 
    //flag is added, 6 is just assigned in memory before the printf.
}
