#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 *print_array- the function that change value
 *@n: the pointer of n
 *@a: a value
 */
void print_array(int *a, int n)
{
  int i;
  for(i = 0; i < n; i++)
  {
    putchar(*(a + i));
  }
  putchar('\n');
}
