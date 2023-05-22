#include "dog.h"
#include <stdlib.h>
/**
*init_dog - initialize a variable of type struct dog
*@d: the pointer to dog
*@name: anem init
*@age: age init
*@owner: owner init
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
