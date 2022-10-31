#include "main.h"
/**
*get_bit - returns the value of a bit a given index
*@n: the value bit
*@index: starting fro 0 of the bit
*Return: value of the bit at index
*	-1 if errir occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
if ((n & (1 << index)) == 0)
return (0);
return (1);
}
