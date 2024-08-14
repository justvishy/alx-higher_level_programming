#include "lists.h"
#include <stdlib.h>

/**
 * check_cycle - prototype function
 * @list: listint_t
 *
 * Return: 0 or -1
 */

int check_cycle(listint_t *list)
{
	listint_t *current = list, *prev_node = NULL;

	while (current)
	{
		prev_node = list;
		while (1)
		{
			if (current->next == prev_node)
				return (1);

			if (prev_node == current)
				break;

			prev_node = prev_node->next;
		}
		current = current->next;
	}
	return (0);
}
