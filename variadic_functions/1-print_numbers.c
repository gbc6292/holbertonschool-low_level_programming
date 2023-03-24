#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints arguments
 * @separator: A space that separates the arguments
 * @n: Quantity of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(l, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(l);
}

