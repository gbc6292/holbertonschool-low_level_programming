#include "main.h"
/**
 * _strlen - Printing the lenght of a string
 * @len Reference to the return
 * @s: string to be return
 * Return: The lengh of the string s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	len++;
	return (len);
}
