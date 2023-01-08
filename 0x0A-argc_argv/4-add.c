#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
/**
 * main - check the code
 *@argc: the fists
 *@argv: the second
 *Return: Always 0 or 1
 */
int main(int argc, char *argv[])
{
int mul = 0;
int a;
int i;
if (argc == 1)
{
puts("0");
return (0);
}
else
{
for (i = 0; i < argc; i++)
{
if (!isdigit(atoi(argv[i])))
{
a = atoi(argv[i]);
mul = mul + a;
}
else
{
puts("Error");
return (1);
}
}
printf("%d\n", mul);
return (0);
}
return (0);
}
