#include <stdio.h>
#include <stdlib.h>
/**
*main - program that adds + num
*@argc: argument counter
*@argv: argument of arrays
*Return: 1 if it contains symbols, 0 otherwise
*/
int main(int argc, char *argv[])
{
int res = 0, num, x, y, z;
for (x = 1; x < argc; x++)
{
for (y = 0; argv[x][y] != '\0'; y++)
{
if (argv[x][y] > '9' || argv[x][y] < '0')
{
printf("%s\n", "Error");
return (1);
}
}
}
for (z = 1; z < argc; z++)
{
num = atoi(argv[z]);
res += num;
}
printf("%d\n", res);
return (0);
}
