# MyMalloc

My implementation of [CS170: Lab 0 - MyMalloc()](https://sites.cs.ucsb.edu/~rich/class/cs170/labs/lab1.malloc/)

## Introduction
Your job is to write your own version of malloc(). C is, for the most part, a statically typed language which means that all data structures have a fixed size at compile time. If you want to make a data structure (e.g. an array) the size of which is only known when the program executes, you need to use the C utility malloc().

In this lab, you will write your own dynamic memory allocator called MyMalloc() that you should be able to use in place of the standard malloc() utility. The API for MyMalloc() is given in the header file my_malloc.h which is shown below.

```c
#if !defined(MY_MALLOC_H)
#define MY_MALLOC_H

#define MAX_MALLOC_SIZE (1024*1024*16)

void InitMyMalloc();
void *MyMalloc(int size);
void MyFree(void *buffer);

void PrintMyMallocFreeList();		/* optional for debugging */


#endif
```