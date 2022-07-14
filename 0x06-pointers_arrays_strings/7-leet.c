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
int Count, leetCount;
char leetLetters[] = "aAeEoOtTlL";
char leetNums[] = "4433007711";
count = 0;
while (s[count] != '\0')
{
leetcount = 0;
while (leetcount < 10)
{
if (leetLetters[leetCount] == s[Count])
{
s[Count] = leetNums[leetCount];
}
leetCount++;
}
Count++;
}
return (s);
}
