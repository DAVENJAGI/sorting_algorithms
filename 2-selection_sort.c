#include "sort.h"

/**
 * selection_sort - Sorts an array of integers
 * in ascending order using Selection sort
 *
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_indx;
	int temp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_indx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_indx])
				min_indx = j;
		}
		if (min_indx != i)
		{
			/* Swap the elements */
			temp = array[i];
			array[i] = array[min_indx];
			array[min_indx] = temp;
			/* Print the array after swapping */
			print_array(array, size);
		}
	}
}
