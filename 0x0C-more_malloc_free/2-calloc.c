#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
**_calloc - allocates memory for an array
*@nmemb: the number of elements
*@size: bytes of each array element
*Return: if nmemb = 0, size = o fails =NULL
*	pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
