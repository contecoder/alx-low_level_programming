#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/* more headers goes there */
/**
 *main- betty style doc for function main goes there
 *
 *Return: always 0 (success)
 */
int main(void)
{
char hexo[16] = "0123456789abcdef";
int i;
for (i = 0 ; i <= 15 ; i++)
{
putchar(hexo[i]);
}
putchar('\n');
return (0);
}
