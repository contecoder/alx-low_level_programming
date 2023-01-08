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
int i;
argv[0] = argv[0];
for (i = 0; i < argc; i++)
{
printf("%d\n", i);
}
return (0);
}
