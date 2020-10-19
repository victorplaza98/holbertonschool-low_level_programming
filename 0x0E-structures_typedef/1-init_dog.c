#include "dog.h"
/**
 * init_dog - function that initialize a variable
 * @d: point to struct dog
 * @name: char to set name of the struc dog
 * @age: int to set value of the struct dog
 * @owner: char to set name of the struct dog
 *
 * Return: Void
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
