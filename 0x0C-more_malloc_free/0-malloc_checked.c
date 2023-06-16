#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: number of memory to allocate
 * Return: pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		printf("Memory allocation failed\n");
		exit(98);
	}
}
