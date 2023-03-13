#include "main.h"
#include <stdio.h>
/**
 * main - Function that print its name
 * @argc: Counter of arguments
 * @argv: Argument to be print
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

