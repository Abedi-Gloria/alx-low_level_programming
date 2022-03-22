#include <stdio.h>
#include "main.h"

/**
 * swap_int - function for declaring pointera a, b
 * 
 * @a: an integer as a pointer 
 * @b: integer as a pointer
 */

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}