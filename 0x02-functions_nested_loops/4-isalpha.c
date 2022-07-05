#include "main.h"
/**
* _isalpha -> is to decide the lowr and upper
* @c: a character to be check on
* Return: return 1 and 0 accordingly
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
