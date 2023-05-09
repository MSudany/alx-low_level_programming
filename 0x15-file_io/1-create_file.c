#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * create_file - ...
 * @filename: ...
 * @text_content: ...
 *
 * Description: ...
 * Return: ...
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	char *s = malloc(sizeof(char *) * strlen(text_content));

	if (filename == NULL)
		return (-1);

	if (f == -1)
		return (-1);

	if (s == NULL)
		return (-1);

	f = open(filename, O_RDWR | O_CREAT);

	if (text_content == NULL)
	{
		free(s);
		close(f);
		return (1);
	}

	write(f, s, strlen(text_content));

	free(s);
	close(f);
	return (1);
}