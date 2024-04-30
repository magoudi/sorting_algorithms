#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 * using the Insertion sort algorithm
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *next, *iterator;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
	return;

    current = (*list)->next;
    while (current != NULL)
    {
	next = current->next;
	iterator = current->prev;
	while (iterator != NULL && current->n < iterator->n)
	{
	current->next = iterator;
	current->prev = iterator->prev;
	iterator->prev->next = current;
	iterator->prev = current;
	print_list(*list);
	iterator = current->prev;
	}
	current = next;
	}
}
