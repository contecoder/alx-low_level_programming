#include"main.h"
/**
 *_isupper - that function function print  1 if lower 0 if not
 *
 *@c: 1 (lowercase) 0 (uppercase)
 *Return: 0
 */
int _isupper(int c)
{
if (isupper(c))
{
putchar(0 + '0');
return (0);
}
else
{
putchar(1 + '0');
return (1);
}
}