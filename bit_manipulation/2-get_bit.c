#include "main.h"

/**
 * get_bit - Functoin that give the value a bit
 * @n: The bit
 * @index: Index to traverse into the bit
 * Return: The value of a bit or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
