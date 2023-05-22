#include "dog.h"
#include <stdlib.h>
/**
*free_dog - free dogmem
*@d: the pointer to d
*/
void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}
