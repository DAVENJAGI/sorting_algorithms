#include "sort.h"

/**
 * insertion_sort_list - sorts a linked list using insert algorithm.
 * @list: list sorted.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *tmp;

	if (list == NULL || (*list)->next == NULL)
		return;
	node = *list;
	while (node)
	{
		while (node->next && (node->n > node->next->n))
		{
			tmp = node->next;
			node->next = tmp->next;
			tmp->prev = node->prev;

			if (node->prev != NULL)
				node->prev->next = tmp;
			if (tmp->next != NULL)
				tmp->next->prev = node;
			node->prev = tmp;
			tmp->next = node;
			if (tmp->prev)
				node = tmp->prev;
			else
				*list = tmp;
			print_list(*list);
		}
		node = node->next;
	}
}
