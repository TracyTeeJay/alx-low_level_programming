#include "main.h"


/**
 * get_bit - gets the bit value at a particular index
 * @n: the input value
 * @index: the point on the binary numberwhose bit would be output
 * Return: the bit value if successfull otherwise -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
/* define variables */
unsigned int count = 0;
while (n)
{
/* convert n to binary and check for index */
if (count == index)
{
if (n % 2)
return (1);
else
return (0);
}
n = n / 2;
count++;
}
/* if error occurs */
if (index > count && index < 63)
return (0);
return (-1);
}
