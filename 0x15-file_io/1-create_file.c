#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: text to add to content
 * Return: Success
 */
int create_file(const char *filename, char *text_content)
{
	int fw, len, rw;

	fw = len = rw = 0;
	fw = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fw == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content[len] != '\0')
	{
		len++;
	}
	rw = write(fw, text_content, len);
	if (rw == -1)
		return (-1);
	close(fw);
	return (1);
}
