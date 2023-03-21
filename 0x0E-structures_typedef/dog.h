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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
*/
#endif /* DOG_H */
