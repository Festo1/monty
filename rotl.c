#include "monty.h"
/**
 * f_rotl - rotates the stack to the top.
 * @head: stack head
 * @counter: line_number (unused)
 * Return: null
 */

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	/* Check if the stack is empty or has only one element */
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	/* Rotate the stack by updating pointers */
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
