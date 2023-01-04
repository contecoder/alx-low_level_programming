#include"main.h"
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
/**
 *_pow_recursion - check the code
 *@x: the first argument
 *@y: the second
 *Return: 0
 */
int _pow_recursion(int x, int y)
{
int i;
int result = 1;
if (y < 0)
{
return (-1);
}
else
{
for (i = y - 1; i >= 0; i--)
{
result = result *x;
}
return (result);
}
}
