## Homework 6

### C Exercises

Modify the link below so it points to the `ex06` directory in your
student repository.

[Here is a link to the ex06 directory in my repository](https://github.com/bwerth/ExercisesInC/tree/master/exercises/ex06)

### Think OS Chapter 6 reading questions

**Memory management**

1) Which memory management functions would you expect to take constant time?
Which ones take time proportional to the size of the allocated chunk?

I would expect free to take time proportionoal to the size of the allocated chunk, but I would expect malloc to be constant time.

2) For each of the following memory errors, give an example of something that might go wrong:

a) Reading from unallocated memory.

You could try to read something from one function that is defined in another without using malloc first.

b) Writing to unallocated memory.

You could try to rewrite something from one function that was initially defined in another without using malloc first.

c) Reading from a freed chunk.

You could free a chunk and then try to read the freed chunk.

d) Writing to a freed chunk.

You could free a chunk and then try to rewrite to the freed part of the heap.

e) Failing to free a chunk that is no longer needed.

You could fail to free a lot of chunks that you are no longer using and run out of space in the heap.


3) Run

```
    ps aux --sort rss
```

to see a list of processes sorted by RSS, which is "resident set size", the amount of physical 
memory a process has.  Which processes are using the most memory?

The browsers I'm using (google chrome) are using the most memory.

4) What's wrong with allocating a large number of small chunks?  What can you do to mitigate the problem?

It is a lot slower to separately allocate a large number of small chunks than it is to allocate one big chunk. If you need a lot of small chunks, you could somehow combine the allocation of space in the heap into one malloc statement. Also, having a lot of small chunks increases the likelihood of leakage. Combining with one allocation only requires data to be freed once, also solving this problem.

If you want to know more about how malloc works, read 
[Doug Lea's paper about dlmalloc](http://gee.cs.oswego.edu/dl/html/malloc.html)
