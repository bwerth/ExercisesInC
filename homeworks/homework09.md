## Homework 9

### C Exercises

Modify the link below so it points to the `ex09` directory in your
student repository.

[Here is a link to the ex09 directory in my repository](https://github.com/bwerth/ExercisesInC/tree/master/exercises/ex09)

### Think OS Chapter 9 reading questions

1) Why does each thread have its own stack?

So that each thread can call functions without interfering with each other.

2) What does the gcc flag `-lpthread` do?

The gcc flag -lpthread compiles with the Pthread library.

3) What does the argument of `pthread_exit` do?

The argument of pthread_exit shares a value with the new thread.

4) Normally the same thread that created a thread also waits to join it.
What happens if another thread tries to join a thread it did not create?

Thread joining works the same way whether it is the parent thread trying to join everything again or not. The thread has to wait for the thread
it wants to join to complete in the same way.

5) What goes wrong if several threads try to increment a shared integer at the same time?

Reading and writing of the shared integer will result in questionable and inconsistent values of the shared integer.

6) What does it mean to "lock a mutex"?

Locking the mutex means preventing any other thread from using the block of code.