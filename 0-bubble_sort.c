#include "sort.h"

/**
 * bubble_sort - Sort an array with bubble sort
 *
 * @array: Pointer to an array of ints
 *
 * @size: Size of the array
 *
 * Return: Void.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int tmp = 0;

	for (i = 0; i < size; i++)
		for (j = 0; j < size - 1; j++)
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
}
