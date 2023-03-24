#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that print a string  followed by a new line
 * @separator: separate the printed strings
 * @n: Quantity of stings in the list
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *ptr;

	if (separator == NULL)
	{
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(p, char *);
		if (a == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", a);
		}
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
