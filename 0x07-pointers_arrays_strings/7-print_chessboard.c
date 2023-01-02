#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 *print_chessboard- check the
 *@a: the first
 *
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i <= 7; i++)
{
for (j = 0; j <= 7; j++)
{
putchar(a[i][j]);
}
putchar('\n');
}
}
