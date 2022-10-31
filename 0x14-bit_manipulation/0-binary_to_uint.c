#include "main.h"
/**
*binary_to_uint - converts a binary to unsigned int
*@b: pointing to a string of 0 and 1 chars
*Return: converted number, 0 if
*	more than 1 char
*	b is NUll
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int len = 0;
if (b[len] == '\0')
return (0);
while ((b[len] == '0') || (b[len] == '1'))
{
num <<= 1;
num += b[len] - '0';
len++;
}
return (num);
}
