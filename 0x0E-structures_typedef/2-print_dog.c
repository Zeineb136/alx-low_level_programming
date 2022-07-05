#include <stdio.h>
#include "dog.h"

/**
*print_dog - function that prints a struct dog
*@d: dog pointer
*
*/

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("(nill)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}


