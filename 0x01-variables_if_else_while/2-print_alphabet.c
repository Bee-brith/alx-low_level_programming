#include <stdio.h>

/**
 * main - using putchar to prints alphabet in lower case
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
