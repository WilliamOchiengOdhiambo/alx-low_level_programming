#include <stdio.h>
/**
 * main - entry point
 * for possible single int combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar('0' + num);
		if (num <= 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
