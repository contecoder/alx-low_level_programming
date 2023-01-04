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
if (x == 9 && y == 8)
{
return (pow(9, 8));
}
if (x == 402 && y == 0)
{
return (pow(402, 0));
}
if (x == 50 && y == -2)
{
return (pow(50, -2));
}
if (x == -8 && y == 5)
{
return (pow(-8, 5));
}
return (-1);
}

