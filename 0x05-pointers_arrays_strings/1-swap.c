#include"main.h"
/**
 *swap_int- the function that change value
 *@a: the pointer of n
 *@b: the second pointer
 */
void swap_int(int *a, int *b)
{
int change;
change = *a;
*a = *b;
*b = change;
}
