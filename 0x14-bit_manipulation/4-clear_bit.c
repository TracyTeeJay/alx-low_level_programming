#include "main.h"

/**
 * clear_bit - fucntions that replaces a bit with zero at a given index
 * @n: the number whose bit should be cleared/ replaced
 * @index: the point at which a bit should be replaced with a 0
 * Return: 1 if successful, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index < sizeof(unsigned long int) * 8)
{
*n &= (~(1 << index));
return (1);
}
return (-1);
}
