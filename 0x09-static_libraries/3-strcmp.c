#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: pointer of the 1st string to compare
 *@s2: pointer of the 2nd string to compare
 *Return: o if s1 and s2 are equal
 *	if s1 < s2 a negative value
 *	if s1 > s2 a positive value
 */
int _strcmp(char *s1, char *s2)
{
while ((*s1 && *s2) && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
