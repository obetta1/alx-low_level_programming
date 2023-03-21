#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d:
 * @name: the name of dog
 * @age: age o dog
 * @owner: ower of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
