#include "main.h"
#include <stdio.h>

/**
 * print_number - prints a number using _putchar
 * @n: the number to be printed
 */
void print_number(int n)
{
unsigned int i = 1;
if (n < 0)
{
putchar('-');
n *= -1;
}
if (n == 0)
putchar('0');
else
{
while ((n / i) >= 10)
i *= 10;
while (i > 0)
{
putchar((n / i) +'0');
n %= i;
i /= 10;
}
}
}
