#include "sort.h"
/**
 * my_swap- swaps 2 nodes
 * @i: 1st node address
 * @k: 2nd node address
 */
void my_swap(listint_t *i, listint_t *k)
{
	if (i->prev)
		i->prev->next = k;
	if (k->next)
		k->next->prev = i;
	i->next = k->next;
	k->prev = i->prev;
	i->prev = k;
	k->next = i;
}
/**
 * insertion_sort_list- sorts a doubly linked list of ints
 * @list: to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *x, *y;

	if (!list || !*list || !(*list)->next)
		return;
	x = (*list)->next;
	while (x)
	{
		y = x;
		x = x->next;
		while (y && y->prev)
		{
			if (y->prev->n > y->n)
			{
				my_swap(y->prev, y);
				if (!y->prev)
					*list = y;
				print_list((const listint_t *)*list);
			}
			else
				y = y->prev;
		}
	}
}
