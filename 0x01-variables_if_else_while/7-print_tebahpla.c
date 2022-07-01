#include <stdio.h>
/**
 * main -> Write a program that prints the alphabet in lowercase, followed by a new line.
 * 
 * RETURN -> always 0
 */
int main(void)
{
   char ch;
  for (ch= 'z'; ch >= 'a'; ch--)
  {
       putchar(ch);
  }
       putchar('\n');

    return (0);
}
