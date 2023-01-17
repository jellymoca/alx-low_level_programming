#include "dog.h"

/**
*init_dog - initialize struct of type dog
*@d: pointer to struct
*@name: pointer member of dog
*@age: member of dog
*@owner: pointer to member of dog
*
*Return: void
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
