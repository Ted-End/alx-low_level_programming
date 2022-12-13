#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 * Return: Always 0
 */
int print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
		_putchar('\n');
	}
}
