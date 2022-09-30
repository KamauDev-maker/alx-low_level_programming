#include "main.h"
/**
*_strspn - gets the length of a prefix substring
*@s: initial segment of a string
*@accept: bytes in accept
*Return: numbers of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, bytes = 0;
for (i = 0; s[i] >= '\0'; i++)
{
for (j = 0; accept[j] > '\0'; j++)
{
if (s[i] == accept[j])
{
bytes++;
break;
}
}
if (accept[j] == '\0')
{
break;
}
}
return (bytes);
}
