#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a sturct with elements name, age and owner.
 * @name: name of the dog; type char *
 * @age: age of the dog; type float
 * @owner: name of the owner; type char*
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
