#include <stdio.h>
#include "main.h"
/**
 *print_array - prints n element of array
 *@a: array
 *@n: number of elemennts
 *
 *Return: nothing 
 */
void print_array(int *a, int n)
{
	int i;

	for (inc = 0; inc < n ; inc++)
	{	
		printf("%d,", a[inc]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
