#include "sort.h"
/**
 *insertion_sort_list - handel insertion algorithm
 *@list: double pointer to the list
 */
void insertion_sort_list(listint_t **list)
{
	/*validate parameter*/
	if (list == NULL)
		return;
	while (*list != NULL)
	{
		if ((*list)->n > (*list)->next->n)
		{
			(*list)->next->prev = (*list)->prev;
			(*list)->prev = (*list)->next;
			(*list)->next = (*list)->next->next;
			(*list)->next->next = *list;
			print_list(*list);
		} /*end forward check*/
		if ((*list)->prev->n < (*list)->prev->prev->n && (*list)->prev->prev != NULL)
		{
			printf("hello, back check");
			*list = (*list)->prev->prev; /*move pointer back*/
			(*list)->next->prev = (*list)->prev;
			(*list)->prev = (*list)->next;
			(*list)->next = (*list)->next->next;
			(*list)->next->next = *list;
			*list = (*list)->next->next;
			print_list(*list);
		} /*end back check*/
	} /*end while*/
} /*end insertion*/


