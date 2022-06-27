#include "lists.h"

/**
 * check_cycle - check if a singly linked list has a cycle in it
 * @list: list to be checked
 * Return: 0 if no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *fun = list;
	listint_t *foo = list;

	if (list == NULL)
		return (0);
	while (foo && fun)
	{
		if (fun->next == NULL)
			return false;
		foo = foo->next;
		fun = fun->next->next;
		if (foo == hare)
			return (1);
	}
	return (0);
}

