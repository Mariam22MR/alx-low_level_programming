#include <stdio.h>
#include <math.h>


/**
 * main - find the prime factors
 *
 * Return: 0
 */


int main(void)
{
	long int a = 612852475143;
	long int b = -1;
	int c;

	while (a % 2 == 0)
	{
		b = 2;
		a = a / 2;
	}

	for (c = 3; c <= sqrt(a); c = c + 2)
	{
		while (a % c == 0)
		{
			b = c;
			a = a / c;
		}
	}
	if (a > 2)
		b = a;
	printf("%ld\n", b);

	return (0);
}
