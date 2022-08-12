#include "sort.h"

/**
 * trade - swaps two integers
 * @a: integer
 * @b: integer
 */
void trade(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

/**
 * partition - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @end: final array
 * @start: first array
 * @array: array of integers
 * @size: size of array
 * Return: i + 1.
 */
size_t partition(int *array, size_t start, size_t end, size_t size)
{
	size_t i, j;
	int pivot = array[end];

	i = start - 1;
	for (j = start; j < end; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				trade(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (pivot < array[i + 1])
	{
		trade(&array[i + 1], &array[end]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_sort_imp - sorts an array of integers in ascending
 * order using the Quick sort algorithm
 *
 * @array: array of integers
 *
 * @low: size of array
 * @hi: size of array
 * @size: size of array
 */
void quick_sort_imp(int *array, int low, int hi, size_t size)
{
	int par;

	if (low < hi)
	{
		par = partition(array, low, hi, size);
		quick_sort_imp(array, low, par - 1, size);
		quick_sort_imp(array, par + 1, hi, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending
 * order using the Quick sort algorithm
 *
 * @array: array of integers
 *
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_imp(array, (size_t)0, size - 1, size);
}
