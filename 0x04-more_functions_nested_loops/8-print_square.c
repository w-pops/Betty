#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_square - prints a square
 * @size: square size
 *
 * Return: nothing on success
 */
void print_square(int size)
{
int count = 0, start;

if (size <= 0)
putchar('\n');
else
{
for (start = 0; start < size; start++)
{
while (count < size)
{
putchar('#');
count++;
}
count = 0;
putchar('\n');
}
}
}
