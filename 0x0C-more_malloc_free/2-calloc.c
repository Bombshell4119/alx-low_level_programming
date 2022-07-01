#include "holberton.h"
/**
*_memset - fills memory with a constant byte
* @s: pointer to put the constant
* @b: constant
* @n: max bytes to use
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsignd int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
*_calloc - allocates memory for an array, using malloc
* @nmemb: array length
* @size: size of each element
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;
if (nmemb == 0 || size == 0)
return (NULL); 
m = malloc(nmemb * size);  
if (m == 0)
return (NULL);
 _memset(m, 0, (nmemb * size));
return (m);  
}
