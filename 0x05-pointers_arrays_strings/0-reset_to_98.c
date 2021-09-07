#include "main.h"
#include <stdio.h>
/**
 * main - using pointer to update value
 *
 * return: always 0.
 */
void reset_to_98(int *n)
{

int *p;

n = 98;
p = &n;
print ("value of 'n' : %d\n", *n); 
return (0);
}
