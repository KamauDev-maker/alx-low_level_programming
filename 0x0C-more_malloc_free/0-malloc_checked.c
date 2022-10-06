#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
**malloc_checked - allocates memory
*@b: memory bytes to allocate
*Return: pointer to allocate memory
*/
void *malloc_checked(unsigned int b)
{
int *a;
a = malloc(b);
if  (a == NULL)
exit(98);
return (a);
}
