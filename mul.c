#include "monty.h"
/**
 * func_mul -  multiplies the second top element of the stack
 * with the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void func_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int l = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
