#include "sort.h"
void swap(int *array, size_t current_i, size_t forw);
/**
 * selection_sort - function to implement selection sort algorithm
 * @array: array to sort
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, small;

	if (array == NULL || size < 2)
		return;

	for (; i < size - 1; i++)
	{
		small = i + 1;
		for (j = small + 1; j < size; j++)
			if (array[j] < array[small])
				small = j;
		swap(array, i, small);
		print_array(array, size);
	}
}

/**
 * swap - swap two items
 * @array: array to sort
 * @current_i: current index
 * @forw: next index from current
 */

void swap(int *array, size_t current_i, size_t forw)
{
	array[current_i] ^= array[forw];
	array[forw] = array[current_i] ^ array[forw];
	array[current_i] ^= array[forw];
}
