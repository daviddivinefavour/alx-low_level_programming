#include "main.h"


/**
 * swap_int -resets the value of a pointer to 98
 * @a: arguement passed to function.
 * @b: arguement passed to function.
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}

