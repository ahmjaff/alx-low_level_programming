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
char alphabet;
for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
