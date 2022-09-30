#include "main.h"
/**
**_strchr - locates a character in a string
*@s: string to be checked
*@c: first occurence of the character
*Return: pointer s or null if character not found
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}
