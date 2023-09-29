#include "main.h"

/**
 * flip_bits - gives number of bits to flip in order to get a given number
 * @n: the number whose bits should be flipped
 * @m: n's bits hsould be flipped to become m
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
/* define variables */
unsigned long int bit_comp = 0, count = 0;
bit_comp = n ^ m;
while (bit_comp)
{
if (bit_comp & 1)
count++;
bit_comp >>= 1;
}
return (count);
}
