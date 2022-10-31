#include "main.h"

/**
 * create_file - Creates a file
 * @filename: A pointer to the file to be created
 * @text_content: A pointer to the string to write the file
 *
 * Return: If the fuction fails - -1
 *         Otherwise - 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, letters_num = 0, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (letters_num = 0; text_content[letters_num]; letters_num++)
			;
	}
	else if (text_content == NULL)
		text_content = "";
	w = write(fd, text_content, letters_num);
	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}
