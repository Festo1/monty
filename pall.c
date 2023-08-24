#include "monty.h"
#include "monty.h"
/**
 * f_pall - Prints the elements of the stack.
 * @head: Pointer to the head of the stack.
 * @counter: Unused parameter.
 * Return: null.
 *
 * Description: This function prints all the elements in the stack.
 * Each element's value is printed followed by a newline character.
 */

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
