#include "main.h"
/**
*set_bit - sets value of a bit to 1
*@n: pointer to the value of the bit
*@index: start point of the bit to set
*Return: 1 if success,-1 fails
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n ^= (1 << index);
return (1);
}
