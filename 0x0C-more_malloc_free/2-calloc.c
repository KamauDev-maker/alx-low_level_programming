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
unsigned int nb, i;
char *a, *b;
if ((nmemb || size) == 0)
return (NULL);
nb = nmemb * size;
a = b  = malloc(nb);
if (a == NULL)
return (NULL);
for (i = 0; i < nb; i++)
*a++ = 0;
return (b);
}
