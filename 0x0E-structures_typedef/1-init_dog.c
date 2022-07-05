#include "dog.h"

/**
*init_dog - initialize a variable of type struct dog
*@d: dog pointer
*@name: name's dog
*@age: age's dog
*@owner: owner's dog
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}


