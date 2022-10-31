#include "main.h"

/**
 * read_textfile - function that reads a file and prints it to
 *                 the POSIX standard output
 * @filename: A pointer to the name of the file
 * @letters: The number of letters the fuction should
 *           read and print.
 *
 * Return: If the function fails or filename is NULL - 0
 *         Otherwise the actual number of bytes the fuction can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t r, w;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);

	return (w);
}
