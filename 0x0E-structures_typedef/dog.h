#ifndef DOG_H
#define DOG_H
/**
*struct dog - structure dog
*@name: the dogs name
*@age: the dogs age
*@owner: the dogs owner
*
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
*dog_t - typedef for strcdog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
