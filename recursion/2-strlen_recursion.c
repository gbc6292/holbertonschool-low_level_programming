#include "main.h"
/**
 * _strlen_recursion - Function that print the length of a string
 * @s: String of reference
 * Return: Length of the string
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return ((_strlen_recursion(s + 1) + 1));
}
