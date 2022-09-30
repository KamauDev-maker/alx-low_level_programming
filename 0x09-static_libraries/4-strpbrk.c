#include "main.h"
/**
**_strpbrk - searches a string for any set of bytes
*@s: string to be checked
*@accept: string to be matched
*Return: a pointer to the byte in s that matches
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
char *p;
i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
p = &s[i];
return (p);
}
j++;
}
i++;
}
return (0);
}
