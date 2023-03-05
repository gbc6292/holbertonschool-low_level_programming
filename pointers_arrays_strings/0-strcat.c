#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: First string to be concatenates
 * @src: Second string to be concatenates
 * Return: the result string dest
 */
char *_strcat(char *dest, char *src)
{
	int a  = 0, b

	while (dest[a])
	{
	a++;
	}
	for (b = 0; src[b] != 0; b++)
	{
	dest[a] = src[b];
	a++;
	}
	dest[a] = '\0';
	return (dest);
}
