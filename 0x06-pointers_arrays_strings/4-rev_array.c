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
char myupper[1];
int i;
 int j;
for (i = 0 ; i < n; i++)
{
  myupper[i] = *(a + i);
}
 j = 0;
 for (i = n; i >= 0; i--)
   {
     *(a + j + 1) = myupper[i];
     j++;
   }
}
