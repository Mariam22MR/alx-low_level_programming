#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_t - frees a linked list
 * @head: head of list
 *
 * Return: void
 */

void free_listint_t(listint_t **head)
{
        listint_t *tmp, *hare;

        if (head != NULL)
        {
                hare = *head;
                while ((tmp = hare) != NULL)
                {
                        hare = hare->next;
                        free(tmp);
                }
                *head = NULL;
        }
}
