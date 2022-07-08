#include "variadic_functions.h"
/**
* sum_them_all - function with two arguments
* @n: int type first argume t
*
* Description: returns the sum of all its parameters
* Return: value of sum or 0
*/
int sum_them_all(const unsigned int n, ...)
{
  unsigned int sum = 0;
  unsigned int i;
  va_list arguments;

  va_start(arguments, n);
  if (n == 0)
    return (0);
  for (i = 0; i < n; i++)
    {
      sum += va_arg(argumnets, unsigned int);
    }
  return (sum);
}
