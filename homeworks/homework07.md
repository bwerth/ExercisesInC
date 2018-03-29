## Homework 6

### C Exercises

Modify the link below so it points to the `ex06` directory in your
student repository.

[Here is a link to the ex07 directory in my repository](https://github.com/bwerth/ExercisesInC/tree/master/exercises/ex07)

### Think OS Chapter 7 reading questions

### Caching

1) What happens if a program writes a new value into the program counter?

Writing a new value into the program counter is a jump or a branch, causing the flow of execution to jump to another part of the program.

2) What is the fundamental problem caches are meant to solve?

Caches are designed to speed up data retrieval from memory by storing the data you are most likely to need next locally for fast retrieval.

3) If cache access time is 1 ns and memory access time is 10 ns, what is the average
access time of a program with hit rate 50%?  How about 90%?

1+9*.5 = 4.5 ns
1+9*.1 = 1.9 ns

4) The book gives several examples of programming language features, like loops, that tend 
to improve locality in the access pattern of instructions and/or data.  Can you think of other examples?  
Or counter-examples that might decrease locality?

Anything that involves predictable retrieval of data from memory improves locality because the program can grab a lot of data we are likely to need at once, increasing the hit rate. If your program jumps around a lot and uses a lot of random data, locality will decrease because there isn't a great way to predict what you are going to need in the near future.

5)  If you refactor a program to improve locality, would you say the program is "cache aware"?  Why not?

A program is only cache aware if you use your knowledge of the specifications of the cache to improve the speed of the program. This is cache aware because you are aware of the capabilities of the cache you are using and have used that knowledge to your advantage.

6) See if you can estimate the cost of a memory cache by comparing the prices of two similar CPUs with 
different cache sizes.

A CPU with a 2MB cache is $89.89 and a CPU with an 8MB cache is 364.98. The 8MB cache CPU is about four times as expensive as the CPU with the 2MB cache, so one could assume a 1MB cache would be about $45.00.

7) Why are cache policies generally more complex at the bottom of the memory hierarchy?

At the bottom of the memory hierarchy, there is more time to make strategic decisions that will inform the hit rate much later. More specifically, at the bottom of the hierarchy there is more data to think about than just what is needed right now.

8) Can you think of a strategy operating systems could use to avoid thrashing or recover when it occurs?

It seems like a good strategy would be to evict the pages that were used by processes used least frequently, kind of like with a cache, when there is an increase in paging to the point of causing stalls. Automatically stopping processes that aren't being used anymore would speed things up in these situations.


