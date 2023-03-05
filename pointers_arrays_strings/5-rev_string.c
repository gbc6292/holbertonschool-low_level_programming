#include "main.h"
/**
 * rev_string - Reversing Srting
 * @s: String to be reverse
 * Return: No Return
 *
 */
void rev_string(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
	_putchar(s[a]);
	}
	_putchar('\n');

	a = 0;

	while (s[a] != 0)
	{
	a++;
	}
	for (a -= 1; a >= 0; a--)
	{
	_putchar(s[a]);
	}
	_putchar('\n');
}
