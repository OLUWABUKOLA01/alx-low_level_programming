#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - structure
 * description - Define a new type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

#ifndef PROTOTYPE
#define PROTOTYPE

/**
 * dog_t - Typedef struct dog
 * Description: A typedef function
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
