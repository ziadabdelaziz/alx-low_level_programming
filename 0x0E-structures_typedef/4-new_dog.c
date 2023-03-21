#include <stdlib.h>
#include "dog.h"

/**
* new_dog - create a dog struct
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int len, i;
	char *name_c, *owner_c;
	dog_t *dog;

	if (name == NULL)
		return (NULL);

	len = 0;
	for (i = 0; *(name + i) != '\0'; i++)
		len++;

	name_c = malloc(len + 1);
	if (name_c == NULL)
		return (NULL);

	for (i = 0; *(name + i) != '\0'; i++)
		name_c[i] = name[i];
	name[i] = '\0';


	if (owner == NULL)
		return (NULL);

	len = 0;
	for (i = 0; *(owner + i) != '\0'; i++)
		len++;

	owner_c = malloc(len + 1);
	if (owner_c == NULL)
		return (NULL);

	for (i = 0; *(owner + i) != '\0'; i++)
		owner_c[i] = owner[i];
	owner[i] = '\0';

	dog->owner = owner_c;
	dog->age = age;
	dog->name = name_c;

	return (dog);
}
