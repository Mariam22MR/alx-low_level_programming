#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments.
 * @ac: int
 * @av: the arguments
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k = 0, count = 0;


	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			count++;
			j++;
		}
		count++;
		i++;
	}

	s = malloc(count + 1 * sizeof(char));

	if (s == 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			s[k] = av[i][j];
			j++;
			k++;
		}
		s[k] = '\n';
		k++;
		i++;
	}
	s[k] = '\0';
	return (s);
}
