#ifndef DOG_H
#define DOG_H

/**
* struct dog - define a new type struct dog
* @name: first member
* @age: second member
* @owner: third membeR
*/

struct dog
{
char *name;
float age;
char *owner;
};

/**
 *dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
