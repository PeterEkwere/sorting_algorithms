#include <stdio.h>
#include "sort.h"

void swap(int *a, int *b);
void print_array(int *array, size_t size);
void bubble_sort(int *array, size_t size);

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void print_array(int *array, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
		printf("\n");
}

void bubble_sort(int *array, size_t size)
{
	size_t i, len =
	int bubbly = 0;

	if (array == NULL || size < 2)
		return;

	while (bubbly == 0)
	{
	bubbly = 1;
	for (i = 0; i < len - 1; i++)
	{
	if (array[i] > array[i + 1])
	{
		swap(&array[i], &array[i + 1]);
		print_array(array, size);
		bubbly = 0;
	}
	}
	len--;
	}
	{
}

int main(void)
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	size_t size = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: ");
	print_array(arr, size);

	bubble_sort(arr, size);

	printf("Sorted array: ");
	print_array(arr, size);

	return (0);
}
