#include <stdio.h>
/**
 * main - 'display the combinaison numbers using putchar'
 * Return: Always 0.
*/
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
