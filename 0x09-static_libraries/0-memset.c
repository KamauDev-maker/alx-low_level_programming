#include "main.h"
/**
**_memset - fills memory with a constant byte
*@s: string to be checked
*@b: constant bytes
*@n: number of byts of memory
*Return: pointer to the memory s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; n > 0; i++, n--)
{
s[i] = b;
}
return (s);
}
