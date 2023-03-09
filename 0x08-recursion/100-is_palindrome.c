#include "main.h"
#include <string.h>

/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: source string
 * @n: size of the string
 * @i: used for interating the string
 * Return: 1 if is palidrom and 0 if not
 */
int check_pal(char *s, int n, int i);

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (check_pal(s, len, 0));
}
/**
 * check_pal - checks if a string is a palidrom
 * @n: size of the string
 * @s: source string
 * @i: used for interating the string
 * Return:  0 or 1
 */
int check_pal(char *s, int n, int i)
{
	int len = strlen(s);

	if (i == len / 2)
		return (1);
	if (*(s + i) != *(s + n - 1))
	{
		return (0);
	}
	return (check_pal(s, n - 1, i + 1));
}
