#include "main.h"
#include <stdio.h>
#include "0-reset_to_98.c"
#include "1-swap.c"
#include "2-strlen.c"
/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int test()
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
// int swap()
// {
//     int a;
//     int b;

//     a = 98;
//     b = 42;
//     printf("a=%d, b=%d\n", a, b);
//     swap_int(&a, &b);
//     printf("a=%d, b=%d\n", a, b);
//     return (0);
// }

int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
