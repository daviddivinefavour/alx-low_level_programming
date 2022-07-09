#include "main.h"
/**
 * print_square - prints a square
 * @size: is the number of times the character # should be printed.
 * Return: nothing
 */
void print_square(int size)
{
if (size > 0)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
