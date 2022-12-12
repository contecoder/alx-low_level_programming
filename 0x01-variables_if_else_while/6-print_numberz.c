#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
/* more headers goes there */
/**
 *main- betty style doc for function main goes there
 *
 *Return: always 0 (success)
 */
int main(void)
{
int i;
for (i = 0 ; i <= 9 ; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
