/**
 * main - practicing putchar
 * Description: using the main function
 * this program prints "_putchar"
 * Return: 0
 */
#include "main.h"
int main(void)
{
char *c = "_putchar";
int i;
for (i = 0; i < 9; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
