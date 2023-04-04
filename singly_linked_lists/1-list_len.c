#include <stdio.h>
#include "lists.h"
/**
 * list_len - Function that count the length of a list
 * @h: The string to be counted
 * Return: A variable that contain the length of the list
 *
 */
size_t list_len(const list_t *h)
{
	size_t ind = 0;

	while (h)
	{
		if (!h->str)
			return (0);
		else
		h = h->next;
		ind++;
	}
	return (ind);
}
