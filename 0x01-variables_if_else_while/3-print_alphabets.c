/**
 * main - a program to print alphabet 
 * in lowercase and uppercase
 *
 * Return: alphabet in lowercase
 */

#include <stdio.h>

int main(void)
{
	char A = 'A';
	char Z = 'Z';
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}
	while (A <= Z)
	{
		putchar(A);
		A++;
	}
		
	putchar('\n');
	return (0);    
}
