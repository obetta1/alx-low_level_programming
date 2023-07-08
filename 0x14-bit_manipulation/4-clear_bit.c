#include "main.h"
/**
 * clear_bit - */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int num_bit = sizeof(unsigned long int) * 8;

	if (index >= num_bit)
		return (-1);
	mask = 1UL << index;
	mask = ~mask;
	*n &= mask;
        return (1);
}
