#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @c: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *c)
{
	int count = 0, i;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(c + count) >= 97 && *(c + count) <= 122)
		*(c + count) = *(c + count) - 32;
	count++;
	while (*(c + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(c + count) == separators[i])
			{
				if ((*(c + (count + 1)) >= 97) && (*(c + (count + 1)) <= 122))
				*(c + (count + 1)) = *(c + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (c);
}
