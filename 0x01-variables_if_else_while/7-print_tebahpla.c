#include <stdio.h>

/**
* main - Prints the letters of the alphabet in reverse
*
* Description: prints the lowercase alphabet in reverse,
* followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
