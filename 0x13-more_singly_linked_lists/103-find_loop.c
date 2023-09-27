#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - frees a linked list
 * @head: head of list
 *
 * Return: address of the node where the loop starts, 
 or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head);
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
