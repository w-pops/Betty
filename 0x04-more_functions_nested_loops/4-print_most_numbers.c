#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_most_numbers - prints most numbers
 */

void print_most_numbers(void)
{
int x;
for (x = 0; x < 10; x++)
{
if (x != 2 && x != 4)
putchar(x + '0');
}
putchar('\n');
}
