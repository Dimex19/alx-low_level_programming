#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: size of memory to allocate
 * Return: Pointer to the address
*/

void *malloc_checked(unsigned int b)
{
	int *size;
	*size = malloc (b);

	if (size == NULL)
		exit(98);
	return (size);
}
