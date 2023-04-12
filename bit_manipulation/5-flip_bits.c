#include "main.h"
/**
 * flip_bits - Function that flip a bit
 * @n: The number
 * @m: Number to flip n to
 * Return:number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
