## Homework 1

### C Exercises

<<<<<<< HEAD
[Here is a link to the ex01 directory in my repository](https://github.com/bwerth/ExercisesInC/tree/master/exercises/ex01)
=======

### Think OS Chapter 1 reading questions

For each of the reading questions below, write answers in the form of
a clear, concise, complete sentence or two.

1) Give an example of a feature common in interpreted languages that is rare in compiled languages.
Interpreted languages support dynamic types, which means the type of a variable doesn't need to be known until the program is running.
2) Name two advantages of static typing over dynamic typing.
Type checking means errors can be found quicker, but static typing also saves space compared to dynamic typing. There are a lot of things that you don't need at compile time anymore with a compiled language. Static compiled languages are faster because the overhead is handled at compile time instead of at run time.
3) Give an example of a static semantic error.
If a function is called in code with the wrong number of inputs or an input that doesn't match the correct type, there is a static semantic error.
4) What are two reasons you might want to turn off code optimization?
You would want to turn off code optimization to make debugging easier (bugs can change because of optimization) and to speed up compilation time.
5) When you run `gcc` with `-S`, why might the results look different on different computers?
<<<<<<< HEAD
The gcc compiler is designed to generate assembly code for the computer the user is using, so if people are using different machines, the type of assembly code that is generated varies.
6) If you spell a variable name wrong, or if you spell a function name wrong, the error messages 
you get might look very different.  Why?
If you spell a variable name wrong, you will get a static checking error, but if you spell a function name wrong, you'll get an error in the linking stage. For this reason, the errors would look different. g
=======

6) If you spell a variable name wrong, or if you spell a function name wrong, the error messages you get might look very different.  Why?

>>>>>>> fe08a14836a8e8736d5a8d7c2c2fd4b52c34becc
7) What is a segmentation fault?
A segmentation fault is a type of error that appears when someone tries to read or write to the wrong location in memory.
