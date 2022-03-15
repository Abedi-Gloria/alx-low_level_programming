#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*	Description: main - prints strings to stdout
*	Return: 0 if false
*/
int main(void)
{
	int n;	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	elseif (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}

