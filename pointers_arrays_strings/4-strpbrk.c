#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s: String to be return after strpbrk work
 * @accept: String to compare with s
 * Return: Pointer s
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int in1, in2;

	for (in1 = 0; s[in1] != '\0'; in1++)
	{
		for (in2 = 0; accept[in2] != '\0'; in2++)
		{
			if (s[in1] == accept[in2])
				return (s + in1);
		}
	}
	return (NULL);
}
