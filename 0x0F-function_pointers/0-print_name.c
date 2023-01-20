#include "main.h"
#include <stdio.h>
/**
 * print_name - name
 * @name: name
 * @f: function f
 */

void print_name(char *name, void (*f)(char *))
{
	f();
}
