#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort
 * @list: Double pointer to the head of the list
 *
 * Description: Sorts nodes in ascending order, prints list after each swap
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (current = (*list)->next; current != NULL; current = next_node)
	{
		next_node = current->next;

		while (current->prev != NULL && current->n < current->prev->n)
		{
			listint_t *prev_node = current->prev;

			prev_node->next = current->next;
			if (current->next != NULL)
				current->next->prev = prev_node;

			current->prev = prev_node->prev;
			prev_node->prev = current;
			current->next = prev_node;

			if (current->prev != NULL)
				current->prev->next = current;
			else
				*list = current;

			print_list(*list);
		}
	}
}
