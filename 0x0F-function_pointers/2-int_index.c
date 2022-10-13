#include "function_pointers.h"
#include <stdio.h>
/**
*int_index - searches for an integers
*@array: elements to be checked
*@size: number of elements in array
*@cmp: function to be used to compare values
*Return: first elements index if no -1, size<=0 -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
