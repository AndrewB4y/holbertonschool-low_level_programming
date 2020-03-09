#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog*, char*, float, char*);

#endif
