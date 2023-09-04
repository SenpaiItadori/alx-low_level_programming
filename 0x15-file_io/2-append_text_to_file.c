#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of  the file
 * @text_content: NuULL terminated string to add at the end of the file
 *
 * Return: 1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t i = 0;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	while (text_content[i])
		i++;
	if (i > 0)
	{
		bytes = write(fd, text_content, i);
	}
	if (fd < 0 || bytes == -1)
		return (-1);

	close(fd);
	return (1);
}
