#include "main.h"
/**
*read_textfile - reads a textfile and prints to stdout
*@filename: name of the file
*@letters: size
*Return: True if 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file, rd, wr;
char *buf;
if (filename == NULL)
return (0);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);
file = open(filename, O_RDONLY);
rd = read(file, buf, letters);
wr = write(STDOUT_FILENO, buf, rd);
if (file == -1 || rd == -1 || wr == -1 || wr != rd)
{
free(buf);
return (0);
}
free(buf);
close(file);
return (wr);
}
