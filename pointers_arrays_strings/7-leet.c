#include "main.h"
/**
 *leet - Changing letters to numbers
 *@s: string to be work
 *Return: Pointer s
 */

char *leet(char *s)
{
	char letters[] = "aeotl";

	char numbers[] = "43071";

	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
	for (b = 0; b < 5; b++)
	}
	if (s[a] == letters[b] || s[a] == letters[b] - 32)
	{
	s[a] = numbers[b];
	break;
	}
	}
	}
	return (s);
}
