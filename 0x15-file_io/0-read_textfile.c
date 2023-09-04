#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: the name of the file to be read
 * @letters: is the number of letters it should read and print
 *
 * Return: returns the actual number of letters it should read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes, wbytes;
	char *buffer = malloc(letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	bytes = read(fd, buffer, letters);
	wbytes = write(STDOUT_FILENO, buffer, bytes);

	if (wbytes != bytes)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (wbytes);
}
