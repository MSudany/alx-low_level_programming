#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "main.h"

int _strlen(char *s);

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

	if (filename == NULL)
		return (-1);

	f = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (f == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(f);
		return (1);
	}

	write(f, text_content, _strlen(text_content));
	close(f);
	return (1);
}

/**
  * _strlen - ...
  * @s: ...
  *
  * Return: ...
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}