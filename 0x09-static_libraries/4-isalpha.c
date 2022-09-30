#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *@c: checks if its a lowercase or uppercase
 *Return: 1 if c is lower/uppercase, 0 if true
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
