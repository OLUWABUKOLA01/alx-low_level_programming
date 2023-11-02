#include "main.h"
/**
 * main - a program that copies the content of a file to another file
 * @argc: array argument
 * @argv: number of array argument
 * Return: Success
 */
int main(int argc, char **argv)
{
	int fdfrom, fdto;
	ssize_t check1, check2;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((check1 = read(fdfrom, buff, 1024)) > 0)
	{
		check2 = write(fdto, buff, check1);
		if (check2 != check1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (check1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fdfrom) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfrom), exit(100);
	if (close(fdto) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdto), exit(100);

	return (0);
}
