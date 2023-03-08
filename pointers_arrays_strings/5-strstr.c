#include <stdio.h>
#include "main.h"
/**
 * _strstr - Function that locates a substring
 * @needle: The first string to find occurrancy
 * @haystack: The second string to find ocurrancy
 * Return: Pointer s with the occurrancy
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int in1, in2, num = 0;

	if (needle[num] == '\0')
	{
		return (haystack);
	}
	for (in1 = 0; haystack[in1] != '\0'; in1++)
	{
		if (haystack[in1] == needle[num])
		{
			for (in2 = 0; needle[in2] != '\0'; in2++)
			{
				if (haystack[in1 + in2] != needle[in2])
				{
					break;
				}
			}
			if (needle[in2] == '\0')
			{
				return (haystack + in1);
			}
		}
	}
	return (NULL);
}
