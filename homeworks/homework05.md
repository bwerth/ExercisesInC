## Homework 5

### C Exercises

Modify the link below so it points to the `ex05` directory in your
student repository.

[Here is a link to the ex05 directory in my repository](https://github.com/bwerth/ExercisesInC/tree/master/exercises/ex05)

### Think OS Chapter 5 reading questions

**Bits and bytes**

1) Suppose you have the value 128 stored as an unsigned 8-bit number.  What happens if you convert 
it to a 16-bit number and accidentally apply sign extension?

You would get 0000000010000000.

2) Write a C expression that computes the two's complement of 12 using the XOR bitwise operator.
Try it out and confirm that the result is interpreted as -12.

Expression: 12^31+1 - If I take the two's complement I get 28, but if I take the two's complement again, I get 12, so this is the correct expression.

3) Can you guess why IEEE floating-point uses biased integers to represent the exponent rather than a
sign bit or two's complement?

We use a biased integer to represent the exponent instead of a sign bit or two's complement because we want to compare the coefficient before we compare the exponent of a number and to do that with a two's complement or sign bit would be more involved than using biased integers.

4) Following the example in Section 5.3, write the 32-bit binary representation of -13 in single precision 
IEEE floating-point.  What would you get if you accidentally interpreted this value as an integer?

-13 = 11000001010100000000000000001101 = 3243245581.

5) Write a function that takes a string and converts from lower-case to upper-case by flipping the sixth bit.  
As a challenge, you can make a faster version by reading the string 32 or 64 bits at a time, rather than one
character at a time.  This optimization is made easier if the length of the string is a multiple of 4 or 8 bytes.

void stringToUppercase(char* string){
	int lengthString = strlen(string);
	for (int i = 0;i<lengthString;i++){
       string[i] = string[i]+100000;
    }
}


