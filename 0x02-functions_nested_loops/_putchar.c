#include"main.h"
void print_alphabet(void);
void print_alphabet(void)
{
int i;
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0 ; i <= 25 ; i++)
{
putchar(alphabet[i]);
}
putchar('\n');
}
