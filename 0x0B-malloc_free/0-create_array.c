#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
**create_array - that creates an array of char
*@size: The size of the array initialized
*@c: character to initialize the array
*Return: NULL if size is zero, pointer to array if success else null
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
