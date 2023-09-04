#include "main.h"

/**
 * create_file - creates a file using
 * @filename: is the name of the file to ccreate
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success -1 on failure
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;
	size_t i = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR | O_CREAT);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;

		bytes = write(fd, text_content, i);
		if (bytes == 0)
			return (-1);
	}
	close(fd);
	return (1);
}
