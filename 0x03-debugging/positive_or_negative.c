#include "main.h"
/**
* positive_or_negative -  checks for a positive, negative or zero
* The program will accept an integer i and check the
* contents of i, before displaying i's status.
* @i: is the number that is checked and printed
*
* Returns nothing!
*/
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
}
