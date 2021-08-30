#include <stdio.h>
/* more headers goes there */
/**
* main -a program that print base 16 in lowercase using putchar
*
* Description: using the main function
* to print base 16 in lowercase using putchars
* Return: 0
*/
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
