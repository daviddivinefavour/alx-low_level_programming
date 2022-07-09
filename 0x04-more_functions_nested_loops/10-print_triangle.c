#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: is the number of times the character # should be printed.
 * Return: nothing
 */
void print_triangle(int size)
{
if (size > 0)
{
int i, j;
int count = size + 1;
for (i = 1; i < count; i++)
{
for (j = 1; j < count; j++)
{
if (j >= count - i)
{
_putchar(35);
}
else
{
_putchar(32);
}

}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
