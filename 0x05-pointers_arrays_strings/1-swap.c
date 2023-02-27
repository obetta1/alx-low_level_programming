#include "main.h"
/**
 * swap_int - function that takes a pointer to an int as
 * parameter and updates the value it points to to 98
 * @a: a pointer peremeter
 * @b: a pointer peremeter
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
