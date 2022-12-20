#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 *rev_string- the function that change value
 *@s: the pointer of n
 *
 */
void rev_string(char *s)
{
int i;
int j;
char reverse[10];
i = strlen(s) - 1;
j = 0;
while (i >= 0)
{
reverse[j] = *(s + i);
i--;
j++;
}
i = 0;
while (i <= 10)
{
*(s + i) = reverse[i];
i++;
}
}
