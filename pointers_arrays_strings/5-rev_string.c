#include "main.h"
/**
 * rev_string - Printing a string in reverse
 * @s: String to be print
 * Return: No return
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
	for (a -= '\0'; s[a] >= 0; a--)
	{
	_putchar(s[a]);
	}
}
