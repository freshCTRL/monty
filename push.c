#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
stack_t *temp = malloc(sizeof(stack_t));
temp->n = line_number;
temp->prev = NULL;
temp->next = NULL;

if (*stack == NULL)
{
*stack = temp;
}
else
{
(*stack)->next = temp;
temp->prev = *stack;
*stack = temp;
}
}
