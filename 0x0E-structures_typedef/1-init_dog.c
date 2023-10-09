#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
