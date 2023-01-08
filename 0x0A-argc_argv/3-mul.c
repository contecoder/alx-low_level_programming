#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
/**
 * main - check the code
 *@argc: the fists
 *@argv: the second
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int mul;
if (argc < 2)
{
puts("Error");
return (1);
}
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
return (0);
}
