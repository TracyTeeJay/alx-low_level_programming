#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_binary - output a given number in binary form
 * @n: number input
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
if (n == 0)
{
_putchar('0');
return;
}
_div(n);
}


/**
 * _div - perfoms division
 * @num: number to be divided
 * Return: nothing
 */

void _div(unsigned long int num)
{
if (num < 1)
return;
_div(num >> 1);
if (num & 1)
_putchar('1');
else
_putchar('0');
}
