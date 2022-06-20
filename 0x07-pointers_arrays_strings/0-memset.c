#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: memory area pointed to by s
 * @b: constant byte b
 * @n: number of bytes of memory area
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
