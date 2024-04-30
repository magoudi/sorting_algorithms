#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 *                        using the Insertion sort algorithm
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    listint_t *current = (*list)->next;

    while (current != NULL)
    {
        listint_t *next = current->next;
        listint_t *prev = current->prev;

        while (prev != NULL && prev->n > current->n)
        {
            prev->next = current->next;
            if (current->next != NULL)
                current->next->prev = prev;
            current->next = prev;
            current->prev = prev->prev;
            prev->prev = current;
            if (current->prev != NULL)
                current->prev->next = current;
            else
                *list = current;
            prev = current->prev;
            print_list(*list);
        }
        current = next;
    }
}
