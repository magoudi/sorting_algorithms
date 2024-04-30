#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: Pointer to the head of the linked list
 */
void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
	return;

	listint_t *current = (*list)->next;

	while (current != NULL)
	{
	listint_t *inner = current->prev;
	int key = current->n;

	while (inner != NULL && inner->n > key)
	{
		inner->next->n = inner-n;
		inner = inner->prev;
	}

	if (inner == NULL)
	{
	(*list)->n = key;
	}
	else
	{
	inner->next->n = key;
	}
	current = current->next;
	}
}
