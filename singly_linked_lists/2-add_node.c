#include "lists.h"
/**
 * add_node - Function that add a new node in the begining of a list
 * @head: the first element of a list
 * @str: the string to be add in the head
 * Return: Adress of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int idx;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (idx = 0; str[idx] != '\0'; idx++)

	new->len = idx;
	new->next = *head;
	*head = new;
	return (new);
}
