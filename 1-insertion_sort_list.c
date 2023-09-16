#include "sort.h"
/**
 *insertion_sort_list - handel insertion algorithm
 *@list: double pointer to the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insertion_point, *next_node;
	/*validate parameter*/
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		insertion_point = current->prev;
		next_node = current->next;
		while (insertion_point != NULL && insertion_point->n > current->n)
			insertion_point = insertion_point->prev;
		if (insertion_point == NULL)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			current->next = *list;
			current->prev = NULL;
			(*list)->prev = current;
			*list = current;
			print_list(*list);
		}
		else
		{
			if (insertion_point->next != current)
			{
				current->prev->next = current->next;
				if (current->next != NULL)
					current->next->prev = current->prev;
				current->next = insertion_point->next;
				insertion_point->next->prev = current;
				insertion_point->next = current;
				current->prev = insertion_point;
				print_list(*list);
			}
		}
		print_list(*list);
		current = next_node;
	}
} /*end insertion*/


