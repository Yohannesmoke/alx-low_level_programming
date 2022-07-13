#include "main.h"
/**
*_strcmp-> compare strings
*@s1:string 1
*@s2:string 2
*Return:compare the strings and return no
*/
int _strcmp(char *s1, char *s2)
{
int value;
int i;
i = 0;
while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}
value = s1[i] - s2[i];
return (value);
}
