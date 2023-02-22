#include "main.h"
#include <ctype.h>
/**
 *times_table - prints the 9 times table, starting with 0.
 * followed by a new line.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int n = i * j;

			if (n < 10)
			{
				printf(" %d", n);
				if (j < 9)
					printf(", ");
			}
			else
			{
				printf("%d", n);
				if (j < 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
