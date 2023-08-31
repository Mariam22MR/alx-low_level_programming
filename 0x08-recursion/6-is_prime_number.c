#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checkes the numbers
 * @n: the number to be checked
 * @i: integer variable
 * Retur: 0 , 1
 */
int check_prime(int n, int i);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check if it prime number
 * @n: integer variable
 * @i: integer variable
 * Return: 0 , 1
 */
int check_prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, i + 1));
}
