#include "function_pointers.h"
/**
 * print_name - ...
 * @name: ...
 * @f: ...
 *
 * Description: ...
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	(*f)(name);
}
