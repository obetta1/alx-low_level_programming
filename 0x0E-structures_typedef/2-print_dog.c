#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * print_dog - a function that initialize a variable of type struct dog
 * @d: int
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	char *sName;
	char *sOwner;

	if (d != NULL)
	{
		if (d->name == NULL)
			sName = "(nil)";
		else
			sName = d->name;
		if (d->owner == NULL)
			sOwner = "(nil)";
		else
			sOwner = d->owner;
		printf("Name: %s\n", sName);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", sOwner);
	}
}
