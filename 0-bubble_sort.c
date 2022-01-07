#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: length of array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	if (size < 2)
		return;


	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - 1; j++)
			if (array[j] > array[j + 1])
			{
				int aux = array[j];

				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
}