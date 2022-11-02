#include "main.h"
/**
*create_file - that create a file
*@filename: name of the file
*@text_content: is a NULL terminated string
*Return: 1 if success, -1 if it fails
*/
int create_file(const char *filename, char *text_content)
{
	int fd, chars_written, str_len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[str_len])
			str_len++;
		chars_written = write(fd, text_content, str_len);
		if (chars_written != str_len)
			return (-1);
	}
	close(fd);
	return (1);
}
