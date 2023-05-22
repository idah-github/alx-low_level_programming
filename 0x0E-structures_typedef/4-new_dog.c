#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
*new_dog - create new dog
*@name: the dogs name
*@age: the dogs age
*@owner: the owner
*Return: the dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len = strlen(name), len1 = strlen(owner);

	dog = malloc(sizeof(dog_t));
	(*dog).name = malloc(len + 1);
	(*dog).owner = malloc(len1 + 1);

	if (dog == NULL || !(name) || !(owner))
	{
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

