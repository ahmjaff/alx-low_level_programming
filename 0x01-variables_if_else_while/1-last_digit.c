#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - this program will assign a random number to the variable n
*
* Description: using the main function
* the program will print the last digit and identify its class
* Return: void
*/int main(void)
{
int n, digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
/*while digit is the last number*/
digit = n%10;
if (digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n,digit);
}
else if (digit < 6 && digit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n,digit);
}
else
{
printf("Last digit of %d is %d and is zero\n", n,digit);
}
return (0);
}
