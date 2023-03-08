#include <stdio.h>
#include "main.h"
/**
 * _strstr - Function that locates a substring
 * @needle: The first string to find occurrancy
 * @haystack: The second string to find ocurrancy
 * Retunr: Pointer s with the occurrancy
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int in1, in2;

	for (in1 = 0; needle[in1] != '\0'; in1++)
	{
		for (in2 = 0; haystack[in2] != '\0'; in2++)
		{
			if (haystack[in2] == needle[in1])
			return (haystack + in2);
		}
	}
	return (needle);
}
