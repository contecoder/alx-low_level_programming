#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 *puts2- the function that change value
 *@str: the pointer of n
 *
 */
void puts2(char *str)
{
int i;
for (i = 0; i < 446; i = i + 2)
{
if (*(str + i) == '\0')
{
break;
}
else
{
putchar(*(str + i));
}
}
putchar('\n');
}
