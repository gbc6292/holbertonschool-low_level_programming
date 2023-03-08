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
			if (in1 == in2)
			in1 = in1 + 1;
			return (needle);
		}
	}
	return (needle);
}
