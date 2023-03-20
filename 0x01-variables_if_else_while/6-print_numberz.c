#include <stdio.h>
/**
 * main - 'display the numbers until 10 using putchar'
 * Return: Always 0.
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	printf("\n");
	return (0);
}

