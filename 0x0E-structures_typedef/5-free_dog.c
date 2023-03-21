#define <stdlib.h>
#define "dog.h"

/**
* free_dog - free dog space
* @d: dog
* Return: None
*/
void free_dog(dog_t *d)
{
	free(d);
}
