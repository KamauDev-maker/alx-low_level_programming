#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
**argstostr - that concat all the arguments
*@ac: integer value
*@av: pointer to the string
*Return: NULL if fails, NULL if ac ==0 / av == NULL
*/
char *argstostr(int ac, char **av)
{
char *str;
int x, y, z, len;
len = 0;
z = 0;
if (ac == 0 || av == NULL)
return (NULL);
x = 0;
while (x < ac)
{
y = 0;
while (av[x][y])
{
len++;
y++;
}
len++;
x++;
}
str = malloc((sizeof(char) + len));
if (str == NULL)
return (NULL);
x = 0;
while (x < ac)
{
y = 0;
while (av[x][y])
{
str[z] = av[x][y];
y++;
z++;
}
str[z] = '\n';
z++;
x++;
}
str[z] = '\0';
return (str);
}
