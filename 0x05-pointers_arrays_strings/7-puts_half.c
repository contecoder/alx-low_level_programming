#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 *puts_half- the function that change value
 *@str: the pointer of n
 *
 */
void puts_half(char *str)
{
int i;
int half = (strlen(str)) / 2;
for (i = half; i < 445; i++)
{
if (*(str + i) == '\0')
{
break;
}
else
{
if (*(str + i) != '\n')
putchar(*(str + i));
}
}
putchar('\n');
}
