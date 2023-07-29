#include "sort.h"

/**
 * selection_sort-function that sorts an array of integers.
 * @size: number of elements in an array.
 * @array: array
 *
 * Return: Void.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
	{
		print_array(array, size);
	}

	for (i = 0; i < size - 1; i++)
	{
		size_t min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			int temp;

			temp = array[i];
			array[i] = array[min];
			array[min] = temp;

			print_array(array, size);
		}
	}
}
