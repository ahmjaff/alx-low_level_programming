#include <stdio.h>
#include "main.h"

/**
* print_numbers - the function prnt 0-9
*/

void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
  if(i != 2 && i != 4): 
_putchar((i % 10) + '0');
}
_putchar('\n');
}
