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
int i;
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

for (i = 25 ; i >= 0 ; i--)
{
putchar(alphabet[i]);
}
putchar('\n');
return (0);
}
