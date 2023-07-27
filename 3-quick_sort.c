#include "sort.h"

void swap_ints(int *a, int *b);

/**
 * swap - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * quick_sort - a function that sorts an array of integers in ascending order
 *             using the Quick sort algorithm
 * @array: Array to be sorted
 * @size: size of the array
 * Return: Sorted array
 */
void quick_sort(int *array, size_t size)
{
	unsigned long int i, j;
	int pivot;

	pivot = array[size - 1];
	i = -1;

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}

	swap(&array[i + 1], &array[size - 1]);
	quick_sort(array, i + 1);
	quick_sort(array + i + 2, size - i - 2);
	print_array(array, size);
}
