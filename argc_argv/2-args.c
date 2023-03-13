#include "main.h"
#include <stdio.h>
/**
 * main - Program that prints all artuments it receives
 * @argc: Counter
 * @argv: String that contain arguments to be printed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
		printf("%s\n", argv[index]);

	return (0);
}
