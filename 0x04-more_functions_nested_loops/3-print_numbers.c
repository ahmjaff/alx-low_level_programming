#include <stdio.h>
#include "main.h"

/**
* main - printing integers from 0-9
* print_numbers(void) - main function
* return 0
*/

void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
_putchar((i % 10) + '0');
_putchar('\n');
}
