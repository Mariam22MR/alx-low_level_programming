#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of
 *coins to make change for amount of money
 * @argc: number of command line arguments
 * @argv: pointer to array of command line arguments
 *
 * Return: if its error returns 1 otherwise 0
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, money = atoi(argv[1]), lc = 0;
		int cent[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cent[i])
			{
				lc = lc + money / cent[i];
				money = money % cent[i];
				if (money % cent[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
