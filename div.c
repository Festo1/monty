#include "monty.h"
/**
 * f_div - divide the top two elements of the stack.
 * @head: the stack head.
 * @counter: line_number.
 * Return: null
*/

void f_div(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	
	/* Count the number of elements in the stack */
	while (h)
	{
		h = h->next;
		len++;
	}
	
	/* Check if there are at least 2 elements in the stack */
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	
	/* Perform division and update the stack */
	aux = h->next->n / h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
