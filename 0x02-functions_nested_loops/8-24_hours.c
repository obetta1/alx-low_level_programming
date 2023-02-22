#include "main.h"
#include <ctype.h>
/**
 *jack_bauer -  prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * followed by a new line.
 */

void jack_bauer(void)
{
	int i, j, k, g;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (g = 0; g < 10; g++)
				{
					printf("%d%d:%d%d\n", i, j, k, g);
				}
			}
		}
	}
}
