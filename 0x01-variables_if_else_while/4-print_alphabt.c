#include <stdio.h>
/**
* main - prints the alphabet in lowercase
*
* Description:  prints the alphabet except q and e
* in lowercase followed by a new line
*
* Return: Aways 0 (Sucess)
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
