#include "main.h"
/**
* _strlen -> return length of string
* @s: parameter 1
* Return: vale of the char
*/
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; ++i);
_putchar(i);
}
