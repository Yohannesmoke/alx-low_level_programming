#include "main.h"
/**
*print_diagonal -> print number from 1 to 9
*@n: parameter
*Return:return 0 and 1
*/
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
_putchar('\n');
else
{
for (j = 0; i < j; j++)
{
for (i = 0; i < j; i++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
