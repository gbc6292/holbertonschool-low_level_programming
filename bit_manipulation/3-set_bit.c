#include "main.h"
/**
 * set_bit - Function that set the value of a bit
 * @n: the bit
 * @index: Index set the value at
 * Return: 1 if is done -1 if if an error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
