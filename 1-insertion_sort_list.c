#include "sort.h"
/**
 *insertion_sort_list - handel insertion algorithm
 *@list: double pointer to the list
 */
void insertion_sort_list(listint_t **list)
{
	/*validate parameter*/
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *current = (*list)->next;
	listint_t *prev, *next_node;
	while (current != NULL)
	{
		next_node = current->next;
		while (current->prev != NULL && current->n < current->prev->n)
		{
			prev = current->prev;
			/*Swap temp and temp->prev*/
			if (current->next != NULL)
				current->next->prev = prev;
			prev->next = current->next;
			current->prev = prev->prev;
			prev->prev = current;
			/*Update the head of the list if necessary*/
			if (current->prev != NULL)
				current->prev->next = current;
			else
				*list = current;
			current->next = prev;

			print_list(*list); /*Print the list after each swap*/
			/*Move temp backwards*/
		} /*end inner while*/
		current = next_node;
	} /*end outer while*/
} /*end insertion*/


