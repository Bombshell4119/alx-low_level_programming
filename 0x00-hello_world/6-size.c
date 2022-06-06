#include <stdio.h>
/**
*main- Entry point
*Return: 0
*/
int main(void)
{
int intType;
float floatType;
long long int longlongType;
long int longtype;
char charType;
printf("size of char: %zu byte(s)\n", sizeof(char));
printf("size of int: %zu byte(s)\n", sizeof(int));
printf("size of long int: %zu byte(s)\n", sizeof(long int));
printf("size of long long int: %zu byte(s)\n", sizeof(long long int));
printf("size of float: %zu byte(s)\n", sizeof(float));
return (0);
}
