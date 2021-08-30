#include <stdio.h>
/* more headers goes there */
/**
* main -a program that print a-z in lowercase and uppercase
*
* Description: using the main function
* to print alphabet in lowercase and uppercase
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
