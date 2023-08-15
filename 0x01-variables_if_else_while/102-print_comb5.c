#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
		for (y = 0; y <= 99; y++)
		{
			if (x < y)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
