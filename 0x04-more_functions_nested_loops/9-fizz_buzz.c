#include <stdio.h>

/**
 * main - fizzbuzz test
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (((i % 3) != 0) && ((i % 5) != 0))
{
printf("%d ", i);
}
else if ((i % 5) == 0)
{
printf("%s ", "Buzz");
}
else if ((i % 3) == 0)
{
printf("%s ", "Fizz");
}
else if (((i % 3)) == 0 && ((i % 5) == 0))
{
printf("%s ", "FizzBuzz");
}
}
printf("\n");
return (0);
}
