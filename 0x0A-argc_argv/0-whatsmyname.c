#include <stdio.h>
/**
* main - This, program prints its own name
* @argc: This argument count the argc
* @argv: This argument vectors of the code
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
argc--; /*added to pass checks*/
printf("%s\n", argv[0]);
return (0);
}
