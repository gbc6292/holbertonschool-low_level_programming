#include "main.h"
/**
 * clear_bit - Function that erase the value of a bit
 * @n: The bit
 * @index: Index to set the value at
 * Return: 1 if is done or -1 if is an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
