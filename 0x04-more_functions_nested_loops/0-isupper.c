#include "main.h"


/**
 * _isupper - checks if character is upper case.
 * @c: arguement passed to function.
 * Return: 1 if uppercase, otherwise 0.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
