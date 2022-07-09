#include "main.h"
/**
 * more_numbers - prints a string of characters
 * Description: prints 0..14 in ten different lines.
 * Return: nothing
 */
void more_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
int u;
int t;
for (u = 48; u <= 57; u++)
{
_putchar(u);
if (u == 57)
{
t = 49;
u = 47;
}
if (t == '1' && u == 52)
{
break;
}
if (t)
{
_putchar(t);
}
}
t = 0;
_putchar('\n');
}
}
