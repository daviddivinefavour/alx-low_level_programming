#include <stdio.h>
/**
* main - Displays the letters of the alphabet
*
* Description: Displays the letters of the alphabet in
* in lowercases, then uppercases,unto a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
