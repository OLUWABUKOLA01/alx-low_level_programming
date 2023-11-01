#include "main.h"
/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: file
 * @letters: letters to print
 * Return: Success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, re, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, re);

	if (op == -1 || re == -1 || wr == -1 || re != wr)
	{
		free(buff);
		return (0);
	}
	free(buff);

	close(op);
	return (wr);
}
