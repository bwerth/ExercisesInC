## Homework 10

### C Exercises

Modify the link below so it points to the `ex12` directory in your
student repository.  That's right, Homework 10 is to do Exercise 12.

[Here is a link to the ex12 directory in my repository](https://github.com/bwerth/ExercisesInC/tree/master/exercises/ex12)

### Think OS Chapter 10 reading questions

1) What does it mean to say that a data structure is thread safe?

It means a data structure can be accessed by two threads at the same time.

2) In the circular buffer implementation of a queue, why is the maximum number of elements in the queue `n-1`,
if `n` is the size of the array?

The nth element in the array is the first element in the array so that it loops around in a circle.

3) If there is no mutex to protect the queue, give an example of a sequence of steps that could leave
the queue in an inconsistent state.

If two different threads try to modify a queue at the same time, there will be two versions of the queue, which is inconsistent.

4) When a thread calls `cond_wait`, why does it have to unlock the mutex before blocking?

It has to unlock the mutex before blocking so that other threads can modify the queue.

5) When a thread returns from `cond_wait`, what do we know is definitely true?  What do we think is probably true?

We can assume that the queue is non-empty.

6) What happens if you signal a condition variable when there are no waiting threads?

The signal has no effect.

7) Do you have to lock the mutex to signal a condition variable?

You do have to lock the mutex to signal a condition variable.

8) Does the condition have to be true when you signal a condition variable?

Signalling a condition indicates that a condition might be true.




