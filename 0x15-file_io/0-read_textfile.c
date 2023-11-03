#include "main.h"

/**
 * read_textfile - read text from file and print the text
 * @filename: file name
 * @letters: num of bytes
 *
 * Return: num of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	bytes = read(file, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(file);
	return (bytes);
}
