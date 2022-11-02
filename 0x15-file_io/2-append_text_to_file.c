#include "main.h"
/**
*append_text_to_file - appends text at the end
*@filename: name of the file
*@text_content: is the NULL terminated str
*Return: 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file, wr, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
file = open(filename, O_WRONLY | O_APPEND);
wr = write(file, text_content, len);
if (file == -1 || wr == -1)
return (-1);
close(file);
return (1);
}
