#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/

void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;

	/* Traverse the linked list and free each node */
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
