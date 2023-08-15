#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - Initializes a dog structure.
  * @dd: A pointer to a dog structure.
  * @name: The name of the dog.
  * @age: The age of the dog.
  * @owner: The owner of the dog.
  *
  * Description: This function initializes the members of a dog structure
  * with the provided values for name, age, the owner.
  * of the pointer to the dog structure is NULL, the function
  * does nothing.
  */
void init_dog(struct dog *dd, char *name, float age, char *owner)
{
	if (!dd) /* Check if the pointer is NULL */
		return;

	dd->name = name;
	dd->age = age;
	dd->owner = owner;
}
