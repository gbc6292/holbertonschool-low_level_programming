#include "main.h"
/**
 * _isalpha - Print if variable c is lower or not
 * @c: Variable to checked
 * Return: Always end in 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c >= 'z'))
	{
	return (1);
	}
	return (0);
}
