#include <stdio.h>
#include "sort.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *array, size_t size) {
    size_t i, len = size;
    int bubbly = 0;

    if (array == NULL || size < 2)
        return;

    while (bubbly == 0) {
        bubbly = 1;
        for (i = 0; i < len - 1; i++) {
            if (array[i] > array[i + 1]) {
                swap(&array[i], &array[i + 1]);
                print_array(array, size);
                bubbly = 0;
            }
        }
        len--;
    }
}
