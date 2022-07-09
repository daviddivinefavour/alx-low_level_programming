#include "main.h"
/**
 * print_line - prints a a straight line.
 * @n: the number of times the underscore charcter should be printed.
 * Return: nothing
 */
void print_line(int n)
{
if (n > 0)
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
