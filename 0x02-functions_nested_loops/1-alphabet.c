#include "main.h"
/**
*	print_alphabet: a function that prints characters in lower case
*	Description: Uses the holberton header file, that brings in the _putchar
*	Return: returns void.
*/
void print_alphabet(void)
	{
	char low;
	low = 'a';
	while (low <= 'z')
	{
		_putchar(low);
		++low;
	}
	_putchar('\n');
	}
