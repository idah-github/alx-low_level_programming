#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
*print_dog - prints the dog
*
*@d: pointer to dog
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(1);
	}
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->name = "(nil)";
	else
	{
		printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
	}
}
