#include "main.h"
/**
*leet - encodes a string into 1337.
*letters a and A are replaced by 4.
*Letters e and E are replaced by 3
*Letters o and O are replaced by 0
*Letters t and T are replaced by 7
*Letters l and L are replaced by 1
*@s: pointer to string.
*
*Return: pointer to s.
*/
char *leet(char *s)
{
int a = 0, b, l = 5;
char tr[5] = {'A', 'E', 'O', 'T', 'L'};
char trw[5] = {'4', '3', '0', '7', '1'};
while (s[a])
{
b = 0;
while (b < l)
{
if (s[a] == tr[b] || s[a] - 32 == tr[b])
s[a] = trw[b];
b++;
}
a++;
}
return (s);
}
