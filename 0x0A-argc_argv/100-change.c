#include <stdio.h>
#include <stdlib.h>
/**
*main - prints minimum num of coins
*@argc: argument counter
*@argv: argument vector
*Return: 0 if True
*/
int main(int argc, char *argv[])
{
int num, x, res = 0;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("%s\n", "Error");
return (1);
}
num = atoi(argv[1]);
if (num < 0)
{
printf("0\n");
return (0);
}
for (x = 0; x < 5 && num >= 0; x++)
{
while (num >= coins[x])
{
num -= coins[x];
res++;
}
}
printf("%d\n", res);
return (0);
}
