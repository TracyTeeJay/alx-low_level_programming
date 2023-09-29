#include "main.h"

/**
 * binary_to_uint - converts a binary number to a decimal number
 * @b: the binyry input
 * Return: an unsigned integer - the converted decimal number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int count = 0, len_b = 0, sum = 0;
if (b == NULL)
return (0);
len_b = _strlen(b);
while (len_b--)
{
if (b[len_b] != 48 && b[len_b] != 49)
return (0);
if (b[len_b] == 49)
sum += 1 << count;
count++;
}
return (sum);
}


/**
 * _strlen - length of a string c
 * @c: the string
 * Return: cnt, length of string
 */

int _strlen(const char *c)
{
int cnt = 0;
while (c[cnt])
cnt++;
return (cnt);
}
