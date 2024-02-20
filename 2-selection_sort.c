#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using the selection sort algorithm.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Print the list after each two elements are swapped.
 *
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int *min;

	if (array == NULL || size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + 1;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + 1) != min)
		{
			swap_ints(array + 1, min);
			print_array(array, size);
		}
	}
}
