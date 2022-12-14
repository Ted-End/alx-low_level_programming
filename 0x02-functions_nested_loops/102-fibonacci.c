#include <stdio.h>
/**
 * main - fabionics
 * Return: Always 9
 */
int main(void)
{
	int n;

	for (n = 0; n < 50; n++)
	{
		printf(fib(n - 1) + fib(n - 2));
	}
	return (0);
}
