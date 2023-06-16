#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr != NULL)
	{
		memset(ptr, 0, nmemb * size);
	}
	return (ptr);
}
