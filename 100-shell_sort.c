#include <stdio.h>
#include <stdlib.h>

Function to prnt the elements of an array
shell sort algorithm using Knuth sequence
Print the array after each interval decrease
Main function to test the shell_sort implementation

void print_array(int *array, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
		printf("\n");
}

void shell_sort(int *array, size_t size)
{
	int interval = 1;

	while (interval <= size / 3)
	{
	interval = interval *3 + 1;
	}

	while (interval > 0)
	{
	for (size_t i = interval; i < size; i++)
	{
		int temp = array[i];
		int j = i;
	while (j >= interval &&array[j - interval] > temp)
	{
	array[j] = array[j - interval];
		j -= interval;
	}
	array[j] = temp;
	}
	interval = (interval -1) / 3;

	Print the array after each interval decrease
	print_array(array, size);
	}
}

int main(void)
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	size_t size = sizeof(arr) / sizeof(arr[0]);

	printf("Original Array: ");
	print_array(arr, size);

	printf("Sorting Process:\n");
	shell_sort(arr, size);

	printf("Sorted Array: ");
	print_array(arr, size);

	return (0);
}
