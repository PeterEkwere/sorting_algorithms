#include "sort.h"
/**
 * shell_sort - Function to implement the
 * shell sort algorithm using Knuth sequence
 *
 * @array: is an array
 * @size: is the size of the array
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t interval = 1;
	size_t i, j;
	int temp;

	while (interval <= size / 3)
	{
		interval = interval * 3 + 1;
	}

	while (interval > 0)
	{
		for (i = interval; i < size; i++)
		{
			temp = array[i];
			j = i;
			while (j >= interval && array[j - interval] > temp)
			{
				array[j] = array[j - interval];
				j -= interval;
			}
			array[j] = temp;
		}
		interval = (interval - 1) / 3;
		print_array(array, size);
	}
}
