#include "main.h"
/**
*create_file - that create a file
*@filename: name of the file
*@text_content: is a NULL terminated string
*Return: 1 if success, -1 if it fails
*/
int create_file(const char *filename, char *text_content)
{
int file, wr, len = 0;
if (filename == NULL)
return (-1);
file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (file == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len])
len++;
wr = write(file, text_content, len);
if (wr != len)
return (-1);
}
close(file)
return (1);
}
