#include <stdio.h>
/**
 *  main - Prinitng
 *  Return: Always en in 0
 *
 */

int main(void)
{
	int a;
	char ch;

	for (a = '0'; a <= '9'; a++)
	putchar(a);
	for (ch = 'a'; ch <= 'f'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
