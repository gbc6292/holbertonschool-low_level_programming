#include "main.h"
/**
 * _strlen_recursion - Function that print the length of a string
 * @s: String of reference
 * Return: Length of the string
 *
 */
int len = 0;

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	len++;
	_strlen_recursion(s);
	return (len);
}
