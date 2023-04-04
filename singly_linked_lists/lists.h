#ifndef LIST_H
#define LIST_H
/**
 * struct list_g - Linked list
 * @str: string
 * @len: length of the string
 * @next: Pointer of the next node
 *
 *
 */
typedef struct list_g
{
	char *str;
	unsigned int len;
	struct list_g *next;
}
list_t;

int _putchar(char c);

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);

#endif
