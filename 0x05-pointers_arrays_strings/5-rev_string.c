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
long int i;
int j;
char reverse[446];
i = strlen(s) - 1;
j = 0;
while (i >= 0)
{
reverse[j] = *(s + i);
i--;
j++;
}
i = 0;
j = strlen(s) - 1;
 while (i <= 446)
{
*(s + i) = reverse[i];
i++;
}
}
