#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_strings - prints strings
*@separator: separator
*@n: number od strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *s;
va_start(ap, n);
for (i = 0; i < n; i++)
{
s = va_arg(ap, char *);
if (s == NULL)
printf("(nil)");
else
{
printf("%s", s);
if (i < (n - 1) && separator != NULL)
printf("%s", separator);
}
}
va_end(ap);
printf("\n");
}
