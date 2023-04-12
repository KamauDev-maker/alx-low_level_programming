#include "search_algos.h"
/**
 * binary_search - That searches for a value in a sorted array BS
 * @array: is the ptr to the first element
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: Always 0, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t first = 0;
	size_t mid = -1;
	size_t end = size - 1;
	int index = -1;

	if (array == NULL)
		return (-1);
	while (first <= end)
	{
		mid = first + (end - first) / 2;
		printf("Searching in array: ");
		for (i = first; i <= end; i++)
		{
			if (i == end)
			{
				printf("%d\n", array[end]);
				break;
			}
			printf("%d, ", array[i]);
		}
		if (array[mid] == value)
		{
			index = mid;
			break;
		}
		else
		{
			if (array[mid] < value)
			{
				first = mid + 1;
			}
			else
			{
				end = mid - 1;
			}
		}
	}
	return (index);
}
