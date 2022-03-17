#include "main.h"

/**
*	_islower - checks if a lower case
*	@i: i is an int and will be checked if lowercase letter
*	 Description: it returns a 1 if is lower
*	 Return: 0 if lowercase, 1 anything else.
*/

int _islower(int i)
	{
	if (i >= 'a' && i <= 'z')
	return (1);
	else
	return (0);
	}
