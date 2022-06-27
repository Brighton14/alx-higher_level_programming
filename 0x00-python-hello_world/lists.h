#ifndef LISTS_H
#define LISTS_H
<<<<<<< HEAD:0x00-python-hello_world/lists.h
=======
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked node structure
 */
>>>>>>> d22c9e4a3122e3d33e706ab7a152c46ce212a127:0x00-python-hello_world/list.h

#include <stdlib.h>

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
