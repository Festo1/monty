#include "monty.h"
/**
 * f_sub - subtracts the top element of the stack from the second top element.
 * @head: stack head
 * @counter: line_number
 * Return: null
 */

void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sub, nodes;

	aux = *head;
	/* Count the number of nodes in the stack */
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;

	/* Check if there are at least 2 elements in the stack */
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sub = aux->next->n - aux->n;
	aux->next->n = sub;
	*head = aux->next;
	free(aux);
}
