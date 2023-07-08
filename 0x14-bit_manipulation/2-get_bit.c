#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value = 0;
	unsigned long int shift;
	unsigned int num_bit = sizeof(unsigned int) * 8;

	if (index >= num_bit)
	{
		return (-1);
	}
	shift = n >> index;
	bit_value = shift & 1;
	return (bit_value);

}
