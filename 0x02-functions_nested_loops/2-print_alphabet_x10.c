include "main.h"
/**
*print_alphabet_x10 -> prints the lowercase alphabets
*/
void print_alphabet_x10(void)
{
int a;
int b;
for (a = 0; a < 10; a++)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
