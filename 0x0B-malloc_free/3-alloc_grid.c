#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
***alloc_grid - returns pointer to a 2D array of integers
*@width: first element
*@height: second element
*Return: NULL on fail,W || H = - NULL
*/
int **alloc_grid(int width, int height)
{
int **array;
int i, j;
array = malloc(sizeof(*array) * height);
if (width <= 0 || height <= 0 || array == 0)
return (NULL);
else
{
for (i = 0; i < height; i++)
{
array[i] = malloc(sizeof(**array) * width);
if (array[i] == 0)
{
while (i--)
free(array[i]);
free(array);
return (NULL);
}
for (j = 0; j < width; j++)
array[i][j] = 0;
}
}
return (array);
}
