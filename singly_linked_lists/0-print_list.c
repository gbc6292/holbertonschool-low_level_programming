#include <stdio.h>
#include "lists.h"
/**
 * print_list - Function that prints a linked list
 * @h: Pointer that contain the adress of a list
 * Return: The number of value in the list
 *
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
