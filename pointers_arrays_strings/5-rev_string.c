#include "main.h"
/**
 * rev_string - Printing a string in reverse
 * @s: String to be print
 * Return: No return
 *
 */
void rev_string(char *s)
{
	int x = 0, y = 0;
	char a;

	while (s[y++])
	x++;

	for (y = x - 1; y >= x / 2; y--)
	{
	a = s[y];
	s[y] = s[x - y - 1];
	s[x - y - 1] = a;
	}
}
