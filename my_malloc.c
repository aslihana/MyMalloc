#include "my_malloc.h"
unsigned char BigBuffer[MAX_MALLOC_SIZE];

struct block *freeList = (void*)BigBuffer;

void InitMyMalloc()
{
	freeList->size = MAX_MALLOC_SIZE - sizeof(struct block);
	//freeList->free = true;
	freeList->next = NULL;
}

/*void MyMalloc()
{

}*/

void MyFree(void* list)
{
	if(((void*)BigBuffer <= list) && (list <= (void*)(BigBuffer + MAX_MALLOC_SIZE)))
	{
		struct block* current = list;

		--current;

		//current->free = true;

		//bind the nodes 
		//which are current and previous
	}

	else
		printf("Please provide a valid pointer allocated by MyMalloc function! \n");
}

/*void PrintMyMallocFreeList()
{

}*/

//MyMalloc(128);
//allocate the first 128 bytes and return a pointer to the first by to the caller.

