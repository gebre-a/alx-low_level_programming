#include <stdio.h>
/**
 * main - entry point
 * Description: Print all numbers of base64 in lowercase.
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
