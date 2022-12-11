#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function to generate a random number
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int n;
int num;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d is", n);
num = n % 10;
if (num > 5)
{
printf("Last digit of %d is 98 and is greater than 5\n", num);
}
else if ((num < 6) && (num < 0))
{
printf("Last digit of %d is -98 and is less than 6 and not 0\n", num);
}
else
{
printf("Last digit of %d is 980 and is 0\n", num);
}
return (0);
}
