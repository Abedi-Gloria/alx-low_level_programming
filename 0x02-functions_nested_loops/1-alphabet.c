#include "main.h"
/**
*	main - check the code
*	Description: print_alphabetis a function that contains characters for output
*	Return: Always 0.
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
