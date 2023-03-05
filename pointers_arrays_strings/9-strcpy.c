#include "main.h"
/**
 * _strcpy - copy a string
 * @dest: Space for print
 * @src: Source
 * Return: dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int o;

	for (o = 0; src[o] != '\0'; o++)
	{
	dest[o] = src[o];
	}
	dest[o++] = '\0';
	return (dest);
}
