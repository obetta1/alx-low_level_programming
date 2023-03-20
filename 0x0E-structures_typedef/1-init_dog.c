#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d:
 * @name: the name of dog
 * @age: age o dog
 * @owner: ower of the dog
 * Return: nothing
 */
struct dog {
	char name[50];
	float age;
	char owner[50];
};
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
