#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
* print_strings - print all argument
* @separator: item to use ot separate numbers
* @n: number of argument to sum
* Return: sum of all argument
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list valist;
va_start(valist, n);
if (i = 0; i < n; i++)
{
str = va_arg(valist, char *);
if (str)
printf("%s", str);
else
print("(nil)");
if (i < n-1)
if (seprator)
printf("%s", seperator);
}
printf("\n");
va_end(valist);
}
