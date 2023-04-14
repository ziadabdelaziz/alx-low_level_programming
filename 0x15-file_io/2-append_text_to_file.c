#include "main.h"

/**
* append_text_to_file - append text to file
* @filename: file
* @text_content: string
* Return: -1 if fails or 1 if success
*/

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, rwr;
	size_t len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len] != '\0'; len++)
		;

	rwr = write(fd, text_content, len);
	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
