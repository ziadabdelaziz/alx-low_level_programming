#include "main.h"

/**
 * read_textfile - read and print a text file
 * @filename: file
 * @letters: number of letters
 * Return: 0 if fails
 * number of written letters if success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buf;
	ssize_t rcnt, wcnt;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rcnt = read(f, buf, letters);
	wcnt = write(STDOUT_FILENO, buf, rcnt);

	close(f);

	return (wcnt);
}
