#include "main.h"
/**
*clear_bit - sets value of a bot to 0
*@n: value to be set
*@index: start point of the bit value
*Return: 1 if sucess,-1 if it fails
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n &= ~(1 << index);
return (1);
}
