#include "main.h"
/**
*print_numbers -> print number from 1 to 9
*return:return 0 and 1
*/
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
return (0);
}
