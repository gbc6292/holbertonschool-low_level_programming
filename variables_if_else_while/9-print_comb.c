#include <stdio.h>
/**
 *  main - Printing comb
 *  Return - Always en in 0
 *
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	if (n != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
