#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes struct_dog
 * @d: pointer to struct dog
 * @name: name of the dog; type array of char
 * @age: age of the dog; type float
 * @owner: name of the owner of the dog; type array of char.
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
