#include "monty.h"

/**
 * f_div - This divides the top two elements of the stack
 * @head: This is the stack head
 * @counter: The line_number
 * Return: no return
 */
void f_div(stack_t **head, unsigned int counter)
{
stack_t *h;
int len = 0, aux;
h = *head;
while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
aux = h->next->n / h->n;
h->next->n / h->n;
*head = h->next;
free(h);
}
