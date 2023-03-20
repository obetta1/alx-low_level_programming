#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - Define a new type struct dog with the following elements:
 * @name: name if the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* DOG_H */
