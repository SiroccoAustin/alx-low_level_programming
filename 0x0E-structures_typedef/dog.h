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
 * struct dog_t - new struct
 * @name: name of dog
 * @age: age
 * @owner: owner
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
