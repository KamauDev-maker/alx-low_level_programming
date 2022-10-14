#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_all - prints anything
*@format: types of args passed
*/
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i = 0;
char *s;
va_start(ap, format);
while (format && format[i])
{
switch (format[i++])
{
case 'c':
printf("%c", va_arg(ap, char));
break;
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'f':
printf("%f", va_arg(ap, float));
break;
case 's':
s = va_arg(ap, char *);
printf("%s", s != NULL ? s : "(nil)");
break;
default:
continue;
}
if (format[i])
printf(",");
}
printf("\n");
}
