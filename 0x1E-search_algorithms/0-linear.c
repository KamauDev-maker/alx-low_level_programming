#include "search_algos.h"
/**
 * linear_search - That searches for a value in an array
 * @array: is a ptr to the first element of the array to search
 * @size: is the number of element in array
 * @value: is the value to search for
 * Return: Always success otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
