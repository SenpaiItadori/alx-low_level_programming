#include "main.h"


/**
 * append_text_to_file - apppends text at the end of a file
 * @filename: the name of the file to be appended
 * @text_content: is the null terminated string to add to
 * Return: 1 on success , else = -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content;)
			i++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
