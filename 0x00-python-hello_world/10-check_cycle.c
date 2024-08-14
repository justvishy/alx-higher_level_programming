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
	listint_t *cur = list, *prev = NULL;

	while (cur)
	{
		prev = list;
		while (1)
		{
			if (cur->next == prev)
				return (1);

			if (prev == cur)
				break;

			prev = prev->next;
		}
		cur = cur->next;
	}
	return (0);
}
