#include <"main.h"
/**
*	main - print out main car by char
*	Description: uses the main header file
*	_putchar: prints strings to stdio.h
*	Return: 0 if successful
*/
int main(void)
{
	char str[] = "_putchar";
	int y;
	y = 0;
	while (str[y])
		{
			_putchar(str[y]);
			++y;
			}
	_putchar('\n');
	return (0);
}
