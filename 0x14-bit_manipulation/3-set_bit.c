#include "main.h"

/**
 * set_bit - function to change a bit at a particular index
 * @n: pointer to the number whose bit is to be changed
 * @index: the point at which a bit would be changed
 * Return: 1 if cusseccful, -1 if unsuccessful
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8)
return (-1);
return ((*n |= 1 << index) ? 1 : -1);
}
