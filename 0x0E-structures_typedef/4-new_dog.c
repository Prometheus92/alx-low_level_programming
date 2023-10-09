#include "dog.h"
#include <stdlib.h>
/**
 * _strcp - return copy of the string
 * @s1: string to be coppied
 * Return: copy of the string
 */
char *_strcp(char *s)
{
	int i;
	char *tmp;

	if (s == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		;
	tmp = malloc(i + 1);
	if (tmp == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		tmp[i] = s[i];
	tmp[i] = '\0';
	return (tmp);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *_name, *_owner;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	_name = _strcp(name);
	if (_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_owner = _strcp(owner);
	if (_owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = _name;
	dog->age = age;
	dog->owner = _owner;
	return (dog);
}
