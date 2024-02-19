#include "sort.h"

/**
 * insertion_sort - Sorts a doubly linked list of integers in ascending order.
 * @list: The doubly linked list to sort.
 *
 * Description: Print the list after each two elements are swapped.
 *
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	bool flag = false;
	listint_t *tmp = NULL, *aux = NULL;

	if (list == NULL || *list == NULL || *list-> == NULL)
		return;

	tmp = *list;
	while (tmp->next)
	{
		if (tmp->n > tmp->next->n)
		{
			tmp->next->prev = tmp->prev;
			if (tmp->next->prev)
				tmp->prev->next = tmp->next;
			else
				*list = tmp->next;
		}
	}
}
