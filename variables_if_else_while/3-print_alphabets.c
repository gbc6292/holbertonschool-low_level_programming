#include <stdio.h>
/**
 *  main - Printing lower and upper case ABC
 *  Return: Always end in 0
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	for (c = 'C'; c <= 'Z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
