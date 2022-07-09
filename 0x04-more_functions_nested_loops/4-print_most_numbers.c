#include "main.h"
/**
 * print_most_numbers - prints a string of characters
 * Description: prints 01356789
 * Return: nothing
 */
void print_most_numbers(void)
{
int i;
for (i = 48; i <= 57; i++)
{
if (i == '2' || i == '4')
{
continue;
}
_putchar(i);
}
_putchar('\n');
}
