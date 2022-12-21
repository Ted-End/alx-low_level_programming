
incude "main.h"
/**
 * swap_int: swaps two numbers
 * @a: input 1
 * @b: input 2
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
