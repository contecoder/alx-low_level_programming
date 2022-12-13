#include"main.h"
/**
 *islower - that function function print  1 if lower 0 if not
 *
 *Return : 1 (lowercase) 0 (uppercase)
 */

int _islower(char charc)
{
if (isupper(charc))
{
putchar(0 + '0');
return (0);
}
else
{
putchar(1 + '0');
return (1);
}
}
