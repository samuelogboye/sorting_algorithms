#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers
 *         in ascending order using the Selection sort algorithm
 * @array: Array to work with
 * @size: the size of the array
 * Return: the sorted array
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int i, j, temp;
	unsigned long int least_num;

	for (i = 0; i < size; i++)
	{
		least_num = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[least_num])
				least_num = j;
		}
		if (least_num != i)
		{
			temp = array[i];
			array[i] = array[least_num];
			array[least_num] = temp;
			print_array(array, size);
		}
	}
}
