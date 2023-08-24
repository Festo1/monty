#include "monty.h"
/**
 * f_pstr - prints a string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: null
*/

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;

	/* Suppress unused parameter warning */
	(void)counter;

	h = *head;

	/* Iterate through the stack, printing characters until a non-printable or null character is encountered */
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
