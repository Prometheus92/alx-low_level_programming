#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _copy - makes a copy of the string
 * @str: String to be copied
 *
 * Return: copy string
 */
char *_copy(char *str)
{
	char *cp;
	int i, j;

	if (src == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	cp = malloc(size(char) * (i + 1));
	if (cp == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		cp[j] = str[j];
	cp[j] = '\0';
	return (cp);
}

/**
 * new_dog - creates a new dog using the typedef reference
 * @name: name of the dog
 * @age: age of the dog
 * @owner: age of the owner
 *
 * Return: sturct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = _copy(name);
	dog->age = age;
	dog->owner = _copy(owner);
	return (dog);
}
