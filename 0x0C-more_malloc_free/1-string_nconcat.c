#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* *string_nconcat - concatenates n bytes of a string to another string
* @s1: string to append to
* @s2: string to concatenate from
* @n: number of bytes from s2 to concatenate to s1
*
* Return: pointer to the resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
len1 = strlen(s1);
len2 = strlen(s2);

s = (char *)malloc((len1 + n + 1) * sizeof(char));

if (!s)
return (NULL);

for (i = 0; i < len1; i++)
{
s[i] = s1[i];
}

while (n < len2 && i < (len1 + n))
s[i++] = s2[j++];

while (n >= len2 && i < (len1 + len2))
s[i++] = s2[j++];

s[i] = '\0';

return (s);
}
