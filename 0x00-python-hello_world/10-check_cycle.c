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
	listint_t *a, *b;

	if (list == NULL || list->next == NULL)
		return (0);

	a = b;
	b = list->next;

	while (a && b && b->next)
	{
		if (a == b)
			return (1);

		a = a->next;
		b = b->next->next;
	}
	return (0);
}
