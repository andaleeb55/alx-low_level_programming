#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data structure
 * @name: the dog's name (cstring)
 * @owner: the dog's owner name (cstring)
 * @age: the dog's age
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
