#ifndef _SORT_H_
#define _SORT_H_

/** includes Libraries **/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/** Structure for Doubly linked list **/
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

<<<<<<< HEAD
/* Printing helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
=======
/** Functions **/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
<<<<<<< HEAD
>>>>>>> 100bd36ecf58044139e13c2d8b45bf87ebfadeb0

/* Sorting algorithms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sore_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void redix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
=======
void bubble_sort(int *array, size_t size);
>>>>>>> b3569c7f245a46101c2d7f88fd8de381e1ac0fe9

#endif /* SORT_H */
