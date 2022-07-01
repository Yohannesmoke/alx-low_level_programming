#include <stdio.h>
/**
 * main -> Write a program that prints the alphabet in lowercase, followed by a new line.
 *
 * RETURN -> always 0
 */
int main(void)
{
     int ch;
     for (ch= 48; ch<= 57; ch++)
	 {
		 printf(ch);
		 if(ch !=57)
		 {
			 putchar(44);
			  putcha(32);
		 }
			  printf("\n");
	 }
		 return (0);
}

