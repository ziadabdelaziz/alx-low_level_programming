#include "dog.h"

/**
* init_dog - initialize dog
* @d: dog
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: None
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
