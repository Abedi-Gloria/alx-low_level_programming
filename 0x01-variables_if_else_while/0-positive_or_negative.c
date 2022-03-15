#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*	Description: main - prints strings of output to the stdio.h
*	If: prints statement when true
*	Return: 0 if success
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
	elseif (n < 0)
		{
		printf("%d is negative\n", n);
		}
	else
		{
		printf("%d is zero\n", n);
		}
		return (0);
}
