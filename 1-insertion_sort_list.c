#include "sort.h"
#include <math.h>

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: Double pointer to the head of the linked list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *swap = NULL;

	if (list == NULL || (*list)->next == NULL)
		return;

	swap = (*list)->next;

	while (swap)
	{
		while (swap->prev && swap->n < swap->prev->n)
		{
			swap->prev->next = swap->next;

			if (swap->next)
				swap->next->prev = swap->prev;
			swap->next = swap->prev;
			swap->prev = swap->prev->prev;
			swap->next->prev = swap;

			if (swap->prev == NULL)
				*list = swap;
			else
			{
				swap->prev->next = swap;
			}
			print_list(*list);
		}
		swap = swap->next;
	}
}
