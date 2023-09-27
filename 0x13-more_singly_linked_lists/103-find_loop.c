#include "lists.h"
#include <stdlib.h>

/**
 * looped_listint_count - finds loop in linked list.
 * @head: linked list to check.
 *
 * Return: adress of node whereloop start, 0 if no loop.
 */

size_t looped_listint_count(listint_t *head)
{
        listint_t *tmp, *hare;

        if (head == NULL)
                return (0);

        for (hare = head->next; hare != NULL; hare = hare->next)
        {
                if (hare == hare->next)
                        return (hare);

                for (tmp = head; tmp != hare; tmp = tmp->next)
                        if (tmp == hare->next)
                                return (hare->next);
        }

        return (0);
}
