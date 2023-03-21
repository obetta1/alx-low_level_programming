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
	printf("Name: %s", d->name);
	printf("Age: %f", d->age);
	printf("Owner: %s", d->owner);
}
