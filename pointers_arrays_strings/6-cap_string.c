#include "main.h"
/**
 * cap_string - Capitalize all words of a strin
 * @str - Stirng to be work
 * Return: str with capitalize words
 *
 */
char *cap_string(char *str)
{
	int id = 0;

	while (str[id])
	{
	while (!(str[id] >= 'a' && str[id] <= 'z'))
	id++;

	if (str[id - 1] == ' ' ||
	str[id - 1] == '\n' ||
	str[id - 1] == '\t' ||
	str[id - 1] == ',' ||
	str[id - 1] == ';' ||
	str[id - 1] == '.' ||
	str[id - 1] == '!' ||
	str[id - 1] == '?' ||
	str[id - 1] == '"' ||
	str[id - 1] == '(' ||
	str[id - 1] == ')' ||
	str[id - 1] == '{' ||
	str[id - 1] == '}' ||
	id == 0)
	str[id] -= 32;
	id++;
	}
	return (str);
}
