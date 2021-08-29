#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints "Programming is like building a multilingual puzzle
* Return: 0
*/
int main()
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0) {
printf(n, "is positive %d");
}
else if (n < 0)
{
printf(n, "is negative %d");
}
else {
printf(n, "is zero %d");
}
return (0);
}


