#include "shell.h"

/**
 * bfree - free pointers and NULL addresses
 * @ptr: pointer address to free
 *
 * Return: if freed 1, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
