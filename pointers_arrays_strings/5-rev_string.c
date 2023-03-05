#include "main.h"
/**
 * rev_string - Reversing Srting
 * @s: String to be reverse
 * Return: No Return
 *
 */
void rev_string(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	_putchar(*s++);
	_putchar('\n');
	}
	while (s[len] != '\0')
	{
	for (len -= 1; len >= 0; len--)
	{
	_putchar(s[len]);
	_putchar('\n');
	}
	}
}
