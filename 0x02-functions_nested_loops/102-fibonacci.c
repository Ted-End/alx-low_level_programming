#include <stdio.h>
/**
 * main - fabionics
 * Return: Always 9
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; i < 50; ++i)
	{
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
