<<<<<<< HEAD
#include <stdio.h>
#include "sort.h"

typedef struct listint_s 
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2) 
{
	if (node1->prev)
		node1->prev->next = node2;
	if (node2->next)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;

	if (!node2->prev)
	*list = node2;
}

void insertion_sort_list(listint_t **list) 
{
	if (!list || !(*list) || !(*list)->next)
		return;

	listint_t *unsorted = (*list)->next;

	while (unsorted) {
		listint_t *current = unsorted;
		listint_t *sorted = unsorted->prev;

	while (sorted && current->n < sorted->n) {
		swap_nodes(list, sorted, current);
		print_list(*list);
	sorted = current->prev;
	}

	unsorted = unsorted->next;
=======
#include "sort.h"
/**
 * insertion_sort_list - This function implements
 * The insertion algo on a linked list
 *
 * @list: is a double pointer to the first node
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = (*list)->next;
	listint_t *insert_point = NULL;
	listint_t *prev_node = NULL;
	listint_t *next_node = NULL;

	if (*list == NULL)
	{
		exit(98);
	}
	else
	{
		while (node != NULL)
		{
			insert_point = node->prev;

			while (insert_point != NULL &&  node->n <= insert_point->n)
			{
				prev_node = insert_point->prev;
				next_node = node->next;

				insert_point->next = next_node;
				if (node->next != NULL)
					next_node->prev = insert_point;

				node->next = insert_point;
				node->prev = prev_node;

				if (prev_node != NULL)
					prev_node->next = node;
				else
					*list = node;


				insert_point->prev = node;
				insert_point = node->prev;
				print_list((const listint_t *)*list);
			} node = node->next;
		}
>>>>>>> 100bd36ecf58044139e13c2d8b45bf87ebfadeb0
	}
}
