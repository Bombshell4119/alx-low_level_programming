#include "variadic_functions.h"
/**
* print_numbers - print numbers
* @separator: item to use ot separate numbers
* @n: number of argument to sum
* Return: sum of all argument
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
va_start(valist, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(valist, int));
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
