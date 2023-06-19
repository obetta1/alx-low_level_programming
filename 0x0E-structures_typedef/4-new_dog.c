#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner pf the dog
 * Return: new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog != NULL)
	{
		dog->name = (char *)malloc(strlen(name) + 1);
		dog->owner = (char *)malloc(strlen(owner) + 1);
		if (dog->name != NULL && dog->owner != NULL)
		{
			strcpy(dog->name, name);
			strcpy(dog->owner, owner);
			dog->age = age;
			return (dog);
		}
		else
		{
			free(dog->name);
			free(dog->owner);
			free(dog);
		}
	}
	return (NULL);
}
