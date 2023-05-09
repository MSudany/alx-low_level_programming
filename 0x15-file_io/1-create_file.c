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
	int f = open(filename, O_RDWR | O_CREAT);
	char *s = malloc(sizeof(char *) * strlen(text_content));

	if (f == -1)
		return (0);

	if (s == NULL)
		return (0);

	write(f, s, strlen(text_content));

	free(s);
	close(f);
	return (0);
}