#include "main.h"
/**
 * set_bit -  a function that sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: number index
 * Return: -1 or 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int num_bit = sizeof(unsigned long int) * 8;

	if (index >= num_bit)
		return (-1);
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
