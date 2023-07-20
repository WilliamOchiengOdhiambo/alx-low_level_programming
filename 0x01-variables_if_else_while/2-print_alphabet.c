#include <stdio.h>
/**
 * main - Entry point
 * program that print lowercase alphabets using putchar
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar("\n");
	return (0);
}
