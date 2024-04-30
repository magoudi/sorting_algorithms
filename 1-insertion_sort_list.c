#include "sort.h"
//#include <stdio.h>

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending order
 * using the Insertion sort algorithm
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    listint_t *current = (*list)->next;

    while (current != NULL)
    {
        listint_t *inner = current->prev;
        while (inner != NULL && inner->n > current->n)
        {
            if (inner->prev != NULL)
                inner->prev->next = current;
            if (current->next != NULL)
                current->next->prev = inner;

            inner->next = current->next;
            current->prev = inner->prev;
            inner->prev = current;
            current->next = inner;

            if (current->prev == NULL)
                *list = current;

            print_list(*list);

            inner = current->prev;
        }
        current = current->next;
    }
}
