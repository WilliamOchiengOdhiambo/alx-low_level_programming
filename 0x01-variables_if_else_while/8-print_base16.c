#include <stdio.h>
/**
 * main - entry point
 * printing hexadecimals number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	char ch = 'a';

	while (num < 10)
	{
		putchar(num);
		num++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
