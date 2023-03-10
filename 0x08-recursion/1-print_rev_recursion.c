#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @n: size of the string
 * @s: source string
 * rev_string - function that print the string in rev order
 * Return: always 0
 */
int rev_string(char *s, int n);

void _print_rev_recursion(char *s)
{
	rev_string(s, strlen(s));
}
/**
 * rev_string - function that print the string in rev order
 * @n: size of the string
 * @s: source string
 * Return: alway return 0
 */
int rev_string(char *s, int n)
{
	if (n == 0)
	{
		return (0);
	}
	printf("%c", *(s + n - 1));
	rev_string(s, n - 1);
	return (0);
}
