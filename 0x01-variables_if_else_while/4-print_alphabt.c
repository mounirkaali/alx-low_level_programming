#include <stdio.h>
/**
 * main - 'display the alphabet'
 * Return: Always 0.
*/
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		if (c == 101 || c == 113)
		{
			continue;
		}
		putchar(c);
	}
	printf("\n");
	return (0);
}
