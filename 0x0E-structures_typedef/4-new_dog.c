#include <stdlib.h>
#include "dog.h"

/**
*new_dog - creates a new dog
*@name: name's dog
*@age: age's dog
*@owner: owner's dog
*
*Return: new dog.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *dog_cp;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog_cp = malloc(sizeof(dog_t));
	if (dog_cp == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	dog_cp->name = malloc(i + 1);
	if (dog_cp->name == NULL)
	{
		free(dog_cp);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		dog_cp->name[k] = name[k];
	dog_cp->age = age;
	for (j = 0; owner[j]; j++)
		;
	dog_cp->owner = malloc(j + 1);
	if (dog_cp->owner == NULL)
	{
		free(dog_cp);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		dog_cp->owner[k] = owner[k];
	return (dog_cp);
}
