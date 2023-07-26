#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers in ascending
 *               order using the Bubble sort algorithm
 * @array: Array to work with
 * @size: Size of the array
 * Return: sorted array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned long int i, j, temp;

	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
