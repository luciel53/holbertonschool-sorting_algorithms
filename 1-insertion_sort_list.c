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
	listint_t *node = NULL;

	if (list == NULL || (*list)->next == NULL)
		return;

	node = (*list)->next;

	while (node)
	{
		while (node->prev && node->n < node->prev->n)
		{
			node->prev->next = node->next;

			if (node->next)
				node->next->prev = node->prev;
			node->next = node->prev;
			node->prev = node->prev->prev;
			node->next->prev = node;

			if (node->prev == NULL)
				*list = node;
			else
			{
				node->prev->next = node;
			}
			print_list(*list);
		}
		node = node->next;
	}
}
