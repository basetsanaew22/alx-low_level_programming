#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - do hard things
  * @dd: function of all
  *
  * Return: void
  */
void free_dog(dog_t *dd)
{
	if (dd != NULL)
	{
		free(dd->owner);
		free(dd->name);
		free(dd);
	}
}
