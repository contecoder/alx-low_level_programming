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
if (y < 0)
{
return (-1);
}
return (pow((double) x, (double) y));
}
