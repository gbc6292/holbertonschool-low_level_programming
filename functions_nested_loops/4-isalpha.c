#include "main.h"
/**
 * _isalpha - Print if variable c is lower or not
 * @c: Variable to checked
 * Return: Always end in 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c >= 122))
	{
	return (1);
	}
	return (0);
}
