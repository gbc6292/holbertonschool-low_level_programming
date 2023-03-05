#include "main.h"
/**
 * rev_string - Reversing Srting
 * @s: String to be reverse
 * Return: No Return
 *
 */
void rev_string(char *s)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
	{
	_putchar(s[a]);
	}
	_putchar('\n');
	for (a -= 1; a >= 0; a--)
	return (s[a]);
}
