#include "main.h"
/**
 * print_diagonal - prints a a straight line.
 * @n: is the number of times the character \ should be printed.
 * Return: nothing
 */
void print_diagonal(int n)
{
if (n > 0)
{
int i, j;
for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
if (i == j)
{
_putchar('\\');
_putchar('\n');
break;
}
_putchar(32);
}

}
}
else
{
_putchar('\n');
}
}
