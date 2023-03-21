#ifndef DOG_H
#define DOG_H

/**
* dog - Typedef for struct dog
*/
typedef struct dog dog;

/**
* struct dog - struct that stores information of a dog
* @name: dog name
* @age: dog age
* @owner: dog owner
*
* Description: struct stores name, age and owner of a dog
*/

struct dog {
    char *name;
    float age;
    char *owner;
};

#endif
