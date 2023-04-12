#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Function that convert binary into a  unsigned int
 * @b: binary number
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{

	int len = 0, pw = 1;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;
	len -= 1;

	while (len >= 0)
	{
		if ((b[len] != '0') && (b[len] != '1'))
		return (0);

		if (b[len] == '1')
			sum += pw;

		pw *= 2;
		len--;
	}

		return (sum);
}
