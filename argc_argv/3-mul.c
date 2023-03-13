#include "main.h"
#include <stdio.h>
/**
 * main - Program that multiply two numbers
 * @argc - Counter
 * @argv - array that containt multiplyers
 * Return - 0
 *
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("fault\n");
		return (1);
	}
	return (0);
}
