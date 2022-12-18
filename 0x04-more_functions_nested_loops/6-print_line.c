#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: line length
 *
 *Return: nothing on success
 */
void print_line(int n)
{
int count = 0;

if (n <= 0)
putchar('\n');
else
{
while (count < n)
{
putchar('_');
count++;
}
putchar('\n');
}
}
