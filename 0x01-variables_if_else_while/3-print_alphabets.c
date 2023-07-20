#include <stdio.h>
/**
 * main - Entry point
 * program to print alphabets in lower and upper cases
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch_lower = 'a';
	char ch_upper = 'A';

	while (ch_lower <= 'z')
	{
		putchar(ch_lower);
		ch_lower++;
	}
	while (ch_upper <= 'Z')
	{
		putchar(ch_upper);
		ch_upper++;
	}
	putchar('\n');
	return (0);
}

