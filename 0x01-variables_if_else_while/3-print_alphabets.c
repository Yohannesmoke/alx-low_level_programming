#include <stdio.h>
/**
 * main -> Write a program that prints the alphabet in lowercase, followed by a new line.
 * 
 * RETURN -> always 0
 */
int main(void)
{
   int ch;
  for (ch= 'a'; ch<= 'z'; ch++)
       putchar(ch);
  for (ch= 'A'; ch<= 'Z'; ch++)
       putchar(ch);
       putchar('\n');
       return (0);
}
