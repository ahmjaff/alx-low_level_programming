#include <stdio.h>
/* more headers goes there */
/**
* main -a program that print numbers using putchar
*
* Description: using the main function
* to print numberz using putchars
* Return: 0
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
putchar((i %10) + '0');
putchar('\n');
return (0);
}
