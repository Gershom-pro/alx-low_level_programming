#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - Allocate memory for array of nmemb elements of size bytes
 * @nmemb: Number of elemnts
 * @size: Size in bytes of elements
 *
 * Return: Pointer to new memory, NULL if it fails
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;
	void *tmp;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(nmemb * size);
	tmp = p;
	if (p == 0)

	{
		return (NULL);
	}
	for (a = 0; a < (nmemb * size); a++)
		p[a] = 0;
	return (tmp);
}
