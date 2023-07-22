#include <stdio.h>
#include "sort.h"

typedef struct listint_s {
    int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2) {
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

void insertion_sort_list(listint_t **list) {
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
    }
}
