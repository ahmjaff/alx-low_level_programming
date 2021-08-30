#include <stdio.h>
/* more headers goes there */
/**
* main -a program that print a-z in lowercase 
*
* Description: using the main function
* to print alphabet in lowercase
* Return: 0
*/int main()
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return 0;
}
