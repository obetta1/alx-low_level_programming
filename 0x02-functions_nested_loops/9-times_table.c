#include "main.h"
#include <ctype.h>
/**
 *times_table - prints the 9 times table, starting with 0.
 * followed by a new line.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			int n = i * j;

			char c = ',';

			if (j == 9)
				c = '$';
			if (n < 10)
			{
				printf(" %d%c ", n, c);
			}
			else
			{
				printf("%d%c ", n, c);
			}
		}
		printf("\n");
	}
}
