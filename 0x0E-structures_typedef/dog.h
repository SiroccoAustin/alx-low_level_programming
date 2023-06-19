#ifndef DOG_H
#define DOG_H

/**
 * struct dog - my dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new struct
 */

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*DOG_H*/
