#include "main.h"
/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s - String to be return after strpbrk work
 * @accept - String to compare with s
 * Return - Pointer s
 *
 */
char *_strpbrk(char *s, char *accept)
{
       	int in1, in2;
	
	for (in1 = 0; accept[in1] != '\0'; in1++)
	{
		for (in2 = 0; s[in2] != '\0'; in2++)
		{
			if (s[in2] == accept[in1])
				return (s);
		}
	}
	return (s);
}
