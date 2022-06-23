#include <unistd.h>
/**
*_puts_recursion - This is to prints string with recursion
*@s: string to print the needed output
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
