#include "main.h"
/**
 *_puts - that prints a string folloewd by a newline
 *@str: string to be checked
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
