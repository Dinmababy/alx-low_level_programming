#include "main.h"
#include <stdio.h>

/**
*print_array - print an array from main
*@a: a pointer given by the main function
*@n: an int given by the main function
*/

void print_array(int *a, int n)
{
int i;
i = 0;
for (n--; n >= 0; n--, i++)
{
printf("%d", a[i]);
if (n > 0)
{
printf("\n");
}
