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
	listint_t *stop, *go;

	if (list == NULL || list->next == NULL)
		return (0);

	stop = list;
	go = list->next;

	while (stop && go && go->next)
	{
		if (stop == go)
			return (1);

		stop = stop->next;
		go = go->next->next;
	}
	return (0);
}
