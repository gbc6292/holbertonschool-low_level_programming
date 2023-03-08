#include "main.h"
/**
 * _strspn - Function that counts similar characters in two string
 * @s: String one
 * @accept: string two
 * Return: Sum
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int idx1, idx2;

	for (idx1 = 0; s[idx1] != '\0'; idx1++)
	{
		for (idx2 = 0; accept[idx2] != s[idx1]; idx2++)
		{
			if (accept[idx2] == '\0')
				return (idx1);
		}
	}
	return (idx1);
}
