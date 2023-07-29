#include "sort.h"

/*A function swap that returns void and swaps two integers*/
/**
 * swap - function that swapos two integers at index
 * @x: integer
 * @y: integer
 *
 * Return: Void
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
/*A function to sort using bubble sort algorithm*/

/**
 * bubble_sort - function that sorts an array of integers in ascending order.
 * @size: numbers in the array.
 * @array: Array
 * Return: Void.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
	{
		print_array(array, size);
	}

	else
	{
		for (i = 0; i < size - 1; i++)
		{
			int swapped = 0;

			for (j = 0; j < size - 1 - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					swapped = 1;
					print_array(array, size);
				}
			}
			if (swapped == 0)
				break;
		}
	}
}
