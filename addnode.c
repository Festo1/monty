#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: null
*/

void addnode(stack_t **head, int n)
{

	stack_t *new_node, *aux;

	aux = *head;
	
	/* Allocates memory for the new node */
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); 
	}
	
	/* Updates previous pointer of the current head if it exists */
	if (aux)
		aux->prev = new_node;
		
	/* Initialize the new node with the given value */
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	
	/* Update the head to point to the new node */
	*head = new_node;
}
