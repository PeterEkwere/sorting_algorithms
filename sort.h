#ifndef _SORT_H_
#define _SORT_H_

/** includes Libraries **/
#include <stdlib.h>
#include <stdio.h>

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

#endif
