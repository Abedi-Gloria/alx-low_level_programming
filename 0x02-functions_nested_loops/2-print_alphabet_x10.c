#include "main.h"
/**
*print_alphabet_x10 - prints the alphabet 10 times
*	Decsription: uses two loops
*	Return:0 if true
*/

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 0; i < 10; ++i)
	{
	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
	_putchar(alpha);
	}
	_putchar('\n');
	}
}
