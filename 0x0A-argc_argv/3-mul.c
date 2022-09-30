#include <stdio.h>
#include <stdlib.h>
/**
*main - a program that multiplies 2 numbers
*@argc: argument counter
*@argv: argument vector
*Return: 0 if True
*/
int main(int argc, char *argv[])
{
int result, x, y;
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
x = atoi(argv[1]);
y = atoi(argv[2]);
result = x *y;
printf("%d\n", result);
return (0);
}
