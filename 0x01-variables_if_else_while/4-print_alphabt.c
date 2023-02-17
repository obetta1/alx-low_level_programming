#include <stdio.h>
/**
 * main - 
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int c = 0;
	char a = 'a';
	for(i = 0; i<26; i++)
	{
	
		if(i == 4 || i == 16)
		{
			continue;
		}
		putchar(i + a);
	}
	putchar('\n');
	return (0);
}
