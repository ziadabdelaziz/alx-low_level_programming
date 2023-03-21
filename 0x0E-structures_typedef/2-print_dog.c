#include "dog.h"
#include <stdio.h>

/**
* print_dog - print dog info
* @d: dog
* Return: None
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	if (d->age)
		printf("Name: %f\n", d->age);
	else
		printf("Age: (nil)\n");

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
