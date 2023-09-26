#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of all data.
 * @head : pointer to thefirst node.
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
