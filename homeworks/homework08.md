## Homework 8

### C Exercises

Modify the link below so it points to the `ex08` directory in your
student repository.

[Here is a link to the ex08 directory in my repository](https://github.com/bwerth/ExercisesInC/tree/master/exercises/ex08)

### Think OS Chapter 8 reading questions

**Multitasking**

1) What is the kernel's most basic task?

The kernel handles interrupts.

2) When an interrupt occurs, what part of the hardware state is saved by hardware?

The program counter is stored in a special register.

3) What is the difference between an interrupt and a context switch?

A context switch is a type of interrupt that involves an interrupt handling that does not ever return to the interrupted process.

4) Give an example of an event that might cause a process to move from the blocked to the ready state.

A process might move from blocked to ready state if it receives a needed input such as a disk read.

5) Why might a scheduler want to give higher priority to an I/O bound process?

6) When I make French toast, I usually make a batch of 12 slices.  But my griddle only has room for 8 slices. 
Each piece of toast has to cook for 5 minutes on each side.  How can I schedule 12 slices onto 8 "cores"
to minimize the elapsed time to cook all 12 slices?  (Note: this question is not hypothetical; 
this is really how I make French toast.)



