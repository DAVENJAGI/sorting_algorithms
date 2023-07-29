#include "sort.h"

/*A function swap that returns void and swaps two integers*/

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
/*A function to sort using bubble sort algorithm*/

/**
 * bubble_sort - function that sorts an array of integers in ascending order.
 *
 * Return: Void.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j]> array [j + 1])
			{
				swap(&array[j], &array [j + 1]);
			}
		}
	}
}
