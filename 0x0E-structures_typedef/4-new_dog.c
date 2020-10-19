#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int x, y, i;
	dog_t *newdog;

	if (name == NULL || owner == NULL)
		return (NULL);
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	for (x = 0; name[x]; x++)
		;
	x++;
	newdog->name = malloc(x * sizeof(char));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < x; i++)
		newdog->name[i] = name[i];
		newdog->age = age;
	for (y = 0; owner[y]; y++)
		;
	y++;
	newdog->owner = malloc(y * sizeof(char));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < y; i++)
		newdog->owner[i] = owner[i];
	return (newdog);
}
