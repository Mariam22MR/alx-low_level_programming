#include <stdio.h>

/**
 * main - print while multiples of 3 and 5 and 15
 *
 * Return: 0
 */

int main(void)
{
	int a;

	a = 1;

	while (a <= 100)
	{
		if (a == 100)
			printf("Buzz");
		else if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz ");
		else if (a % 3 == 0 && a % 5 != 0)
			printf("Fizz ");
		else if (a % 5 == 0 && a % 3 != 0)
			printf("Buzz ");
		else
			printf("%d ", a);
		a++;
	}
	printf("\n");
	return (0);
}
