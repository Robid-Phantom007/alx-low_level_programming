#ifndef DOG_H
#define DOG_H

/**
 * struct dog - To define a new type describing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_new_t - Typedef for struct dog
 */
typedef struct dog dog_new_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_new_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_new_t *d);

#endif
