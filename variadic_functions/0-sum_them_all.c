#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
/**
 * sum_them_all - Function that sum all arguments
 * @n: The quantity of arguments in the list
 * Return: An int that point to the result of the sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int sum = 0, j;

	if (n == 0)
	{
	return (0);
	}
	va_start(ptr, n);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
