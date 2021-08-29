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
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0) {
printf("%d", n, "is positive");
}
else if (n = 0){
printf("%d", n, "is zero");
}
else (n < 0){
printf("%d", n, "is negative")
}
return (0);
}


