#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file to create
 * @text_content: text to add to content
 * Return: 1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fw, len, rw;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fw = open(filename, O_WRONLY | O_APPEND);
	rw = write(fw, text_content, len);

	if (fw == -1 || rw == -1)
		return (-1);

	close(fw);
	return (1);
}
