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

/** Functions **/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void sort(int *array, int start, int end);
int partition(int *array, int start, int end);
void swap(int *a, int *b);
void shell_sort(int *array, size_t size);


#endif /* SORT_H */
