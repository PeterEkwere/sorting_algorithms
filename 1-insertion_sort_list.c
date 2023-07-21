#include "sort.h"
/**
 * insertion_sort_list - This function implements
 * 	The insertion algo on a linked list
 *
 * @list: is a double pointer to the first node
 * Return: void
 */
void insertions_sort_list(listint_t **list)
{
	listint_t *temp = list;
	listint_t *a_list = list;
	listint_t *node = list->next;
	listint_t *next_node = NULL;

	while (node != NULL)
	{
		while (node->n < temp->n)
		{
			node->prev = temp->prev;
			temp->next = node->next;
			node->next = temp;
			temp->prev = node;
			next_node = temp->next;
			next_node->prev = temp;
			temp = node->prev;
			print_list(*a_list);
		}
		node = node->next;
	}
}
