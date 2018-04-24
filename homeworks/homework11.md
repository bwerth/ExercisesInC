## Homework 11

### C Exercises

Modify the link below so it points to the `ex11` directory in your
student repository.

[Here is a link to the ex11 directory in my repository](https://github.com/bwerth/ExercisesInC/tree/master/exercises/ex11)

### Think OS Chapter 11 reading questions

1) Why is is a bad idea to pass a `sem_t` as a parameter?

Passing sem_t as a parameter creates a copy of the semaphore. It's usually a bad idea to make copies of semaphores.

2) When you use a Semaphore as a mutex, what should its initial value be?

You should set the initial value of the semaphore mutex to one to signify that it is unlocked.

3) Can you think of another use for a Semaphore where you might use a different initial value?



4) In my solution to the producers-consumers problem using Semaphores,
what does it mean if the value of `queue->spaces` is `3` at some point in time?

<<<<<<< HEAD
This means there are three empty spaces in the queue.

5) What does it mean if `queue->space` is `-3`?
=======
5) What does it mean if `queue->spaces` is `-3`?
>>>>>>> 2eb34b55a445205fcd24f378435b99c86d925853

This means the queue is three spaces too short.

6) Why doesn't `queue_pop` have to use `queue_empty` to check whether the queue is empty?

Queue waits for there to be items in the queue instead of checking whether the queue is empty or not.

7) Any problem that can be solved with Semaphores can also be solved with mutexes and condition variables.
How can you prove that that's true?

You can prove this is true by implementing a semaphore with mutexes and condition variables.

8) What is Property 3?  Hint: see *The Little Book of Semaphores*, 
[Section 4.3](http://greenteapress.com/semaphores/LittleBookOfSemaphores.pdf). 

Property three indicates that a thread waiting on a semaphore must be woken when a thread executes signal.s



