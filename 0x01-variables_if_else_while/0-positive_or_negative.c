#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/* more headers goes there */
/**
*main- betty style doc for function main goes there
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%u is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%u is zero\n", n);
}
return (0);
}
