#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 *print_rev- the function that change value
 *@str: the pointer of n
 *
 */
void print_rev(char *str)
{
int i;
i = strlen(str);
while (i >= 0)
{
if (*(str + i) != '\0')
{
putchar(*(str + i));
}
i--;
}
putchar('\n');
}
