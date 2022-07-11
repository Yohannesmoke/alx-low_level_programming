#include "main.h"
/**
* _strlen -> return length of string
* @s: parameter 1
* Return: vale of the char
*/
int _strlen(char *s)
{
int value;
for (s = 0; *s != '\0'; s++)
{
value = value + 1;
}
return (value);
}
