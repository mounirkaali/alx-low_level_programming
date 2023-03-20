#include <stdio.h>
/**
 * main - 'display the alphabet'
 * Return: Always 0.
*/
int main(void)
{
	int c;
	int C;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	for (C = 65; C <= 90; C++)
	{
		putchar(C);
	}
	printf("\n");
	return (0);
}
