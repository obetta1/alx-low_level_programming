#include <stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * binary_to_uint - Write a function that converts
 * a binary number to an unsigned int.
 * @b: pointer to a string b representing a binary number.
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			result = result * 2 + (b[i] - '0');
		}
	}
	return (result);
}
