#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data type for class of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Description: data type of dog that stores
 * information about name age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
