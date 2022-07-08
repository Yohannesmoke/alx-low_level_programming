#include "main.h"
/**
*print_diagonal -> print number from 1 to 9
*@n: parameter
*Return:return 0 and 1
*/
void print_diagonal(int n)
{
int i = 0;
int j = 0;
if (n > 0)
{
while (i < n)
{
while (j < i)
{
_putchar(' ');
j++;
}
i++;
j = 0;
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}
