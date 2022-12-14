#include"main.h"
#include<stdio.h>
/**
 *times_table- that function print alphabet 10 times
 *
 *
 */
void times_table(void)
{
int i;
int j;
for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
if ((i * j) > 9)
{
if (j == 9)
printf("%d", i * j);
else
printf("%d, ", i * j);
}
else
{
if (j == 9)
printf("%d", i * j);
else
printf("%d,  ", i * j);
}
}
printf("\n");
}
}
