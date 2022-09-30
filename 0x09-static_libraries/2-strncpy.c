#include "main.h"
/**
 **_strncpy - copies a string
 *@dest: end of another string
 *@src: source of a string
 *@n: number of bytes from copied from src
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
