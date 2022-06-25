#include <stdio.h>
/**
* main - this prints out all of the arguments passed to it
* @argc: this argument count the argc
* @argv: this is argument vector
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
argv[0] = 0;
return (0);
}
