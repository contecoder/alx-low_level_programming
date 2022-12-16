#include"main.h"
#include<string.h>
#include<ctype.h>
/**
 *_isupper- this a descripition
 *
 *@c: value
 *Return: 0 is false and 1 if true
 */
int _isupper(int c)
{
if (isupper(c))
{
printf("%c: 1\n", c);
return (1);
}
else
{
printf("%c: 0\n", c);
return (0);
}
return (c);
}
