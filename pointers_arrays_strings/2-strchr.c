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
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
