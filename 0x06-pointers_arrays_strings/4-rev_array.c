#include"main.h"
#include<stdio.h>
#include<string.h>
#include<ctype.h>
/**
 *reverse_array- check the
 *@a: the first
 *@n:
 *
 *Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int reverse[12];
int i;
int j;
for (i = 0; i < n; i++)
{
reverse[i] = *(a + i);
}
j = 0;
for (i = n - 1; i >= 0; i--)
{
*(a + j) = reverse[i];
j++;
}
}
