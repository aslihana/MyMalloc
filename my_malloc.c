#include <"my_malloc.h">
unsigned char BigBuffer[MAX_MALLOC_SIZE];

/*void InitMyMalloc()
{

}*/

/*void MyMalloc()
{

}*/

/*void MyFree()
{

}*/

/*void PrintMyMallocFreeList()
{

}*/

//MyMalloc(128);
//allocate the first 128 bytes and return a pointer to the first by to the caller.

struct block
{
	int size;
	//size_t size;

	struct block *next;
	//struct block *prev;

	//bool free;
};