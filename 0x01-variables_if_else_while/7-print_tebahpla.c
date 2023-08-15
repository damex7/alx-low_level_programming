#include <stdio.h>

/**
 * main - program to print the alphabets backward
 *
 * Return: 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
