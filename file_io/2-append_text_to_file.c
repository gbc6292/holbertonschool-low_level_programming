#include "main.h"
#include <string.h>
/**
 * append_text_to_file- function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: content to be appended
 * Return: Returns: 1 if is done  -1 if is an error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wt;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
