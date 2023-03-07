#include "main.h"
/**
 * _memset - function that fills the first n bytes of the memory
 * @s: The space of the memory when we work
 * @b: The content to be place
 * @n: The space of the memory where we work
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int idx, t = n;

	for (idx = 0; idx <= t; idx++)
	{
	s[idx] = b;
	}
	return (s);
}
