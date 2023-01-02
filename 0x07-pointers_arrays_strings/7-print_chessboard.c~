#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 *print_diagsums- check the
 *@a: the first
 *@size: seconde
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int i, j;
int k = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
sum1 = sum1 + *(a + k);
}
k++;
}
}
printf("%d, ", sum1);
sum1 = 0;
k = 0;
for (i = 0; i < size; i++)
{
for (j = size - 1; j >= 0; j--)
{
if (i == j)
{
sum1 = sum1 + *(a + k);
}
k++;
}
}
printf("%d\n", sum1);
}
