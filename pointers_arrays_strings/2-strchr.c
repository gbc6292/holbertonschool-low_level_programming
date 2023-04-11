#include "main.h"
#include <stdlib.h>
/**
 * _strchr - Function to locate a character in a string
 * @s: String of reference
 * @c: Character to be found
 * Return: character located or null
 *
 */
char *_strchr(char *s, char c)
{
	int idx;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		if (s[idx] == c)
		{
			return (s + idx);
		}
	}
	return (NULL);
}
