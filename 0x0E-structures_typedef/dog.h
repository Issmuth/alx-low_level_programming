#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data type for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Description: each dog struct will store the name age and owner
 * of a single dog enity
 * dog_t - Typedef for struct dog
 */

typedef dog_t struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
