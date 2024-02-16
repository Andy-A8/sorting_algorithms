#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order.
 * @array: The array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Print the array after each time you swap two elements.
 *
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0, temp = 0, max = 0, swapped = 1;

	if (array == NULL || size < 2)
		return;

	max = size - 1;

	for (i = 0; i < max; ++i)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			swapped = 1;
			print_array(array, size);
		}

		if (swapped == 1 && i == max - 1)
			i = -1, swapped = 0, --max;
	}
}
