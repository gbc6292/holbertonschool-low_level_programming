#include "main.h"
/**
 * _strncpy - Copie input number
 * @dest: string copy
 * @src: source string
 * @n: bytes copied
 * Return: dest
 *
 */
char *_strcnpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[intex++])
	src_len++;
	for (index = 0; src(index) && index < n; index++)
	dest[index] = src[index];
	for (index = src_len; index < n; index++)
	dest[index] = '\0';
	return (dest);
}
