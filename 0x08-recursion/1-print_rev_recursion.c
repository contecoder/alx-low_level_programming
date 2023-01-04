#include"main.h"
#include<stdio.h>
/**
 *_print_rev_recursion- check the code
 *
 *@s: the first argument
 */
void _print_rev_recursion(char *s)
{
int i;
int j;
for (i = 0; i <= 100; i++)
{
if (*(s + i) == '\0')
{
for (j = i - 1; j >= 0; j--)
{
printf("%c", *(s + j));
}
break;
}
}
printf("\n");
}
