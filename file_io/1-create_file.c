#include "main.h"
#include <string.h>
/**
 * create_file - Function that create a file
 * @filename: name of the file
 * @text_content: the number of characters
 * Return: Returns: 1 if is done, -1 if is an error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wt;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		wt = write(fd, text_content, strlen(text_content));
		if (wt == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
