#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees memory.
 * @d: struct dog.
 * Description: free memory from struct
 * Return: no return.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
