#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - returns the sum of all its param
*@n: integer number
*Return: the sum of params, n ==0 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int sum;
unsigned int i;
if  (n == 0)
return (0);
sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, unsigned int);
va_end(ap);
return (sum);
}
