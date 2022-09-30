#include "main.h"
/**
**_strstr - locates a substring
*@haystack: substring string
*@needle: finds the 1st occurence of the substring
*Return: pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] > '\0'; i++)
{
for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
{
if (haystack[j] != needle[j - i])
{
break;
}
}
if (needle[j - i] == '\0')
{
return (haystack + i);
}
}
return (0);
}
