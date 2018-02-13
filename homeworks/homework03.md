## Homework 3

### C Exercises

Modify the link below so it points to the `ex02.5` directory in your
student repository.

[Here is a link to the ex02.5 directory in my repository](https://github.com/bwerth/ExercisesInC/tree/master/exercises/ex02.5)

### Think OS Chapter 3 reading questions

### Virtual memory

1) The Georgian alphabet has 33 letters.  How many bit are needed to specify a letter?

You need six bits to specify a letter in the Georgian alphabet.

2) In the UTF-16 character encoding, the binary representation of a character can take up to 32 bits.  
Ignoring the details of the encoding scheme, how many different characters can be represented?

4294967296 different characters can  be represented using 32 bits.

3) What is the difference between "memory" and "storage" as defined in *Think OS*?

Memory is volatile and storage is non-volatile, so items in storage are not lost when the computer shuts down.

4) What is the difference between a GiB and a GB?  What is the percentage difference in their sizes?

A GiB is 2^30 bytes and a GB is 2^9 bytes. A GB is .0000477 percent of a GiB.

5) How does the virtual memory system help isolate processes from each other?

When there is a reading or writing of memory, virtual addresses are generated. Hardware maps the virtual addresses to physical addresses. This process of going from virtual addresses to physical addresses is on a per-process basis, so if there are multiple processes mapped to the same location in virtual address space, they will get mapped to different places in physical address space, creating isolation. In the same sense, a process can only generate the virtual addresses to map to the space in physical memory that it is affecting.

6) Why do you think the stack and the heap are usually located at opposite ends of the address space?

Putting the stack and the heap at opposite ends of the address space allows them to grow towards each other. This makes it easier to allocate space where it is needed.

7) What Python data structure would you use to represent a sparse array?

I'd use a class defined with a virtual page number and a physical page number and I'd put instantiated versions of this class in an array.

8) What is a context switch?

A context switch is a process that interrupts a running process, saves its state, and runs another process.