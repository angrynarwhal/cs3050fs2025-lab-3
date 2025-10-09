//#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "hash.h"

// These are stubs.  That is, you need to implement these functions.

// return -1 when a collision is encountered. (i.e., you don't need to use chaining or
// open addressing here. Just return -1) 
int InsertFailCollision(	void * hashtable, int elementSize, int elementCountMax,
                            int key, void * element, int (*HashFunc)(int key))
{
    return 0;
}

// similar to `InsertFailCollision`, your search function may assume there are 
// NO chained or open addressed record in this case
void * SearchNoCollision(void * hashtable, int key, int elementSize, int (*HashFunc)(int key))
{
    return NULL;
}

// div and multi: hash the value using a function that is division, and another
// that is multiplication based.  Note that insertion and search will also need to 
// use this hashing function. 
int DivMethod(int key)
{
	return 0;
}

int MultMethod(int key)
{
    return 0;
}


// All of these remaining methods require you to deal with chained values in the case
// That collisions occur. (Obviously) check to see if there is a collision, and handle it
void * AllocateChainTable(int elementCountMax)
{
    return NULL;
}

void FreeChainTable(void * hashtable)
{
}

int InsertChain(	void * hashtable, int elementSize, int elementCountMax,
                            int key, void * element, int (*HashFunc)(int key))
{
    return 0;
}

void * SearchChain(void * hashtable, int key, int elementSize, int (*HashFunc)(int key))
{
    return NULL;
}
