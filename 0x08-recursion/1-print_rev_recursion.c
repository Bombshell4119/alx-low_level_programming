/**
*_print_rev_recursion - prints out a string
*@s: print out the string
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
