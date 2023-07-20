#include <stdio.h>
/**
 * main - Entry point
 * using putchar to print numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
