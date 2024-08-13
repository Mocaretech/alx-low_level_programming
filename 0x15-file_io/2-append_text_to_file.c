#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0, written;
	if (filename ==NULL)
		return (-1);
	file = open( filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		written = write(file, text_content, len);
		if (written == -1 || written != len)
		{
			close(file);
			return(-1);
		}
	}
	close(file);
	return(-1);
}
