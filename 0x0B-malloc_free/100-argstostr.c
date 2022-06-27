#include <stdlib.h>


/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Pointer to the new string (Success), NULL (Error)
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = len = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;

		}
		len++;
		i++;

	}
	len++;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
		{

			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
		i++;

	}
	return (str);
}
