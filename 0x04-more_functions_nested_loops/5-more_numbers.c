#include "main.h"
/**
*more_numbers -> print number from 1 to 9
*return:return 0 and 1
*/
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
if (j >= 10)

_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
