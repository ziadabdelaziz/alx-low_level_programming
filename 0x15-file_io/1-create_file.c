#include "main.h"

/**
* read_textfile - create a file and write to it
* @filename: file
* @text_content: string
* Return: -1 if fails or 1 if success
*/

int create_file(const char *filename, char *text_content)
{
	size_t letters;
	ssize_t fd, rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters] != '\0'; letters++)
		;

	rwr = write(fd, text_content, letters);
	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
