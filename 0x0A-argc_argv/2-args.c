#include <stdio.h>
/**
* main - This prints out all of the arguments passed to it
* @argc: this argument counts argc
* @argv: argument vector
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
rintf("%s\n", argv[i]);
return (0);
}
