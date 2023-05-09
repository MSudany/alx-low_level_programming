#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - ...
 * @filename: ...
 * @letters: ...
 *
 * Description: ...
 * Return: ...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, _read;
	char *buff = malloc(sizeof(char *) * letters);

	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDWR);
	if (f == -1)
		return (0);

	_read = read(f, buff, letters);
	if (_read == -1)
		return (0);

	write(STDOUT_FILENO, buff, _read);

	free(buff);
	close(f);
	return (_read);
}
