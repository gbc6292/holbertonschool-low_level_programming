#include <stdio.h>
/**
 *  main - Printing abc without q and e
 *  Return: Always end in 0
 *
 */

int main(void)
{
	char ch, q, e;

	q = 'q';
	e = 'e';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != e && ch != q)
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
