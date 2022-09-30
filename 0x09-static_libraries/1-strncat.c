#include "main.h"
/**
 **_strncat - concatenates two strings
 *@dest: destination character
 *@src: source character
 *@n: number of bytes from src to to appended to dest
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i = 0;
while (dest[i++])
dest_len++;
for (i = 0; src[i] && i < n; i++)
dest[dest_len + i] = src[i];
return (dest);
}
