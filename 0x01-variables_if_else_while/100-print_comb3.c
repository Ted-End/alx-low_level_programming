#include <stdio.h>
/**
 * main -prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; ones <= '9'; tens++)/*prints ones digit*/
	{
		for (ones = '0'; ones <= '9'; ones++) /*prints ones digit*/
		{
			if (!((ones == tens) || (tens > ones))) /*eliminates repition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8)) /*adds comma and space*/
				{
					putchar(',');
					putchair(' ');

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
