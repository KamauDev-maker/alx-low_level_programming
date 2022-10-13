#include "function_pointers.h"
#include <stdlib.h>
/**
*print_name - prints a name
*@name: name to be printed
*@f: pointer to function f
*Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (f)
f(name);
}
