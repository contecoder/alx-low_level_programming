#include"main.h"
/**
 *more_numbers- this a descripition
 *
 */
void more_numbers(void)
{
int i;
int j;
char val[20] = "01234567891011121314";
for (j = 1; j <= 10; j++)
{
for (i = 0; i <= 20; i++)
{
putchar(val[i]);
}
putchar('\n');
}
}
