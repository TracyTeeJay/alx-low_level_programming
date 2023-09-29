#include "main.h"


/**
 * get_endianness - gets the orde in which bits are arranged in memory
 * Return: endeaness
 *
 */

int get_endianness(void)
{
unsigned int val;
char *check;
val = 1;
check = (char *) &val;
return ((int) *check);
}
