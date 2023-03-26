#include "monty.h"

void (*f)(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);;
}
else
{
printf("%d\n", (*stack)->n);
}
}
