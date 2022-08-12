 #include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 *
 * @array: array of integers
 *
 * @size: size of array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int temp;
	int flag;

	if (size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
				flag = 1;
			}
		}
		if (flag == 1)
		{
			temp = array[min_index];
			array[min_index] = array[i];
			array[i] = temp;
			print_array(array, size);
			flag = 0;
		}
	}
}
