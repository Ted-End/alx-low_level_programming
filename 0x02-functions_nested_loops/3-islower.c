#include "main.h"
/**
 * _islower - check if a char is lowecase
 * Return: 1 if char is lowecase, otherwise 0
 * Parameter: c
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
