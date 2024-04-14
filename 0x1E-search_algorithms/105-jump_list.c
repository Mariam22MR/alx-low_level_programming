#include "search_algos.h"

/**
 * jump_list - Searches for algorithm in sorted singly
 *             linked list of integers using jump search.
 * @list: pointer to head of linked list to search.
 * @size: Number of nodes in list.
 * @value: Value to search for.
 *
 * Return: If value is not present or head of list is NULL,
 *         Otherwise, pointer to first node where value is located
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump, i;
	listint_t *nood, *tmp;

	if (!list)
		return (NULL);
	jump = sqrt(size);
	nood = list;
	do {
		tmp = nood;
		for (i = jump; nood->next && i > 0; --i, nood = nood->next)
			;
		printf("Value checked at index [%lu] = [%d]\n", nood->index, nood->n);
		if (!nood->next)
			break;
	} while (nood->n < value);
	printf("Value found between indexes [%lu] and [%lu]\n",
		tmp->index, nood->index);
	nood = tmp;
	while (nood->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", nood->index, nood->n);
		nood = nood->next;
		if (nood->n == value)
			return (printf("Value checked at index [%lu] = [%d]\n",
				nood->index, nood->n), nood);
		if (!nood->next)
			return (printf("Value checked at index [%lu] = [%d]\n",
				nood->index, nood->n), NULL);
	}
	if (nood->n == value)
		return (printf("Value checked at index [%lu] = [%d]\n",
			nood->index, nood->n), nood);
	return (NULL);
}
