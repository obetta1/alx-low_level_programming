#incude "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: string sorce
 * @f: pointer to the function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(EXIT_SUCCESS);
	if (f == NULL)
		exit(EXIT_SUCCESS);
	(*f)(name);
}
