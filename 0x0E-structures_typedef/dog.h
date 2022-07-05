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
/**
*dog_t - typedef for struct
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
