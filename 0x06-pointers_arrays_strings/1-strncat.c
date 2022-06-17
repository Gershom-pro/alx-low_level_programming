#include "main.h"

/**
 * _strncat - concatenate n bytes to destination string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
