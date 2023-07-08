#include "main.h"
/**
 * get_endianness -  a function that checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	if (*byte == 1)
		return (1);
	else
		return (0);
}
