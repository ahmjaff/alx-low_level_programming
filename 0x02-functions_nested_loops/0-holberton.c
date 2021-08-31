/**
 * main - practicing putchar
 * Description: using the main function
 * this program prints "holberton"
 * Return: 0
 */
#include "main.h"
int main(void)
{
char c[10] = "Holberton";
int i;
for (i = 0; i < 10; i++)
{_putchar(c[i]);
}
_putchar('\n');
return (0);
}
