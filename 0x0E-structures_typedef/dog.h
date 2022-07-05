#ifndef DOG_DEF
#define DOG_DEF

/**
**struct dog - new type definition
*@name: name's dog
*@age: age's dog
*@owner: owner's dog
*
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
