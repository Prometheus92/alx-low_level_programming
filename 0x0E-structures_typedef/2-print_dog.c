#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints struct dog
 * @d: pointer to struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	char *name = d->name ? d->name : "(nil)";
	float age = d->age ? d->age : 0;
	char *owner = d->owner ? d->owner : "(nil)";

	printf("Name: %s\n", name);
	printf("Age: %f\n", age);
	printf("Owner: %s", owner);
}
