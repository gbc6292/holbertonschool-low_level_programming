#include "main.h"
/**
 * string_toupper - Changin lower case letters
 * @str: string of change
 * Return: str
 *
 */
char *string_toupper(char *str)
{
	int ind = 0;

	while (str[ind])
	{
	if (str[ind] >= 'a' && str[ind] <= 'z')
	str[ind] -= 32;
	ind++;
	}
	return (str);
}
