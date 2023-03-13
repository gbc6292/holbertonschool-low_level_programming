#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - Function that duplicate a string
 * @str: String to be copied
 * Return: The pointer of the new allocated space or NULL if is 0 or NULL
 *
 */
char *_strdup(char *str)
{
	int idx, len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) + 1;
	dup = malloc(len);

	if (dup == NULL)
	{
		return (NULL);
	}

	for (idx = 0; idx < len; idx++)
	{
		dup[idx] = str[idx];
	}
	return (dup);
}
