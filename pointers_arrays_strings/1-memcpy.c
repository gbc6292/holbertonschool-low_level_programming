#include "main.h"
/**
 * _memcpy - Function that copies memory area
 * @dest: Space of memomy when we paste
 * @src: The source to be copied
 * @n: The number of bytes to copy
 * Return: dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
	{
	dest[idx] = src[idx];
	}
	return (dest);
}
