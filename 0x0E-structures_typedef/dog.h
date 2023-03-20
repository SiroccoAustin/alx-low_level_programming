#ifndef MACRO_H
#define MACRO_H

/**
 *struct dog_t - new struct
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*MACRO_H*/
