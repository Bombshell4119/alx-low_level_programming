/**
* factorial - returns the factorial number in code
* @n: the max factorial in the code
* Return: n is the factorial of numbers
*/
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
