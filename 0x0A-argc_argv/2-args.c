#include <stdio.h>
/**
*main - prints all arguments passed
*@argc: argument counter
*@argv: arguments of array
*Return: 0 if True
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
