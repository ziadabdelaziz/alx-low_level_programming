#include "main.h"

/**
 * main - copy file
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 if sccess - 1 otherwise
 */
int main(int argc, char *argv[])
{
	int fdf, fdt, fdfc, fdtc;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	fdf = open(argv[1], O_RDONLY);
	if (fdf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE");
		exit (98);
	}

	fdt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fdt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE");
		exit(99);
	}



	fdtc = close(fdt);
	fdfc = close(fdf);
	if (fdtc == -1 || fdfc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE");
		exit(100);
	}

	return (0);
}
