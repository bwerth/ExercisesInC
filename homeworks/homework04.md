## Homework 4

### C Exercises

Modify the link below so it points to the `ex03` directory in your
student repository.

[Here is a link to the ex03 directory in my repository](https://github.com/YOUR_GITHUB_USERNAME_HERE/ExercisesInC/tree/master/exercises/ex02.5)

### Think OS Chapter 4 reading questions

**Files and file systems**

1) What abstractions do file systems provide?  Give an example of something that is logically 
true about files systems but not true of their implementations.

A file system is a mapping of each file name to its contents. Information is stored in files with a file name, but according to the implementation the file name is just points to another point in memory that stores the contents of the file.

2) What information do you imagine is stored in an `OpenFileTableEntry`?

I'd imagine the OpenFileTableEntry data structure stores an index from the beginning of the file to indicate what the file position is.

3) What are some of the ways operating systems deal with the relatively slow performance of persistent storage?

Operating systems will try to fetch large amounts of data at once, predict when data needs to be retrieved, or keeping a copy of data that has been used recently in memory for quicker access.

4) Suppose your program writes a file and prints a message indicating that it is done writing.  
Then a power cut crashes your computer.  After you restore power and reboot the computer, you find that the 
file you wrote is not there.  What happened?

If the file is only in the cache and not yet on the disk, the data could be lost.

5) Can you think of one advantage of a File Allocation Table over a UNIX inode?  Or an advantage of a inode over a FAT?

The time to retrieve information using a File Allocation table would be more consistent than the retrieve time for a UNIX inode, however, the minimum time to access data using a UNIX inode system is shorter than that using a FAT.

6) What is overhead?  What is fragmentation?

Overhead is the space required for data structures used by the allocator. Fragmentation is the sum of the blocks that are left unused.

7) Why is the "everything is a file" principle a good idea?  Why might it be a bad idea?

The everything is a file principle is a good idea because it only forces them to learn one API that is universally applicable. However it might be a bad idea because it could potentially get confusing for someone trying to understand code.

If you would like to learn more about file systems, a good next step is to learn about journaling file systems.  
Start with [this Wikipedia article](https://en.wikipedia.org/wiki/Journaling_file_system), then 
[Anatomy of Linux Journaling File Systems](http://www.ibm.com/developerworks/library/l-journaling-filesystems/index.html).  
Also consider reading [this USENIX paper](https://www.usenix.org/legacy/event/usenix05/tech/general/full_papers/prabhakaran/prabhakaran.pdf).



