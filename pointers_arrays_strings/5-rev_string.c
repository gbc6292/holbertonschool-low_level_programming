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
	int b = 10;

	while (s[a] != '\0')
	{
	a++;
	}
	_putchar(s[a]);
	_putchar('\n');

	while (s[b] -= a)
	{
	b--;
	}
	_putchar(s[b]);
	_putchar('\n');
}
