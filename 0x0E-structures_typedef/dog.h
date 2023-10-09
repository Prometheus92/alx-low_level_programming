#ifndef _DOG
#define _DOG

/**
 * struct dog - structure for a dog object
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
