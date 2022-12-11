#include<stdlib.h>
#include<stdio.h>
/**
 *main- betty style doc for function main goes there
 *
 *Return: always 0 (success)
 */
int main(void)
{
int i;
char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

for (i = 0 ; i <= 51 ; i++)
{
putchar(alphabet[i]);
}
putchar('\n');
return (0);
}
