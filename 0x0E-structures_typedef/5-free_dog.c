#include <stdlib.h>
#include "dog.h"

/**
* free_dog - free dog space
* @d: dog
* Return: None
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
