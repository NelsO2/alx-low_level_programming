#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Return: Always success
 */
int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
	printf("%i is positve\n", n);
else if (n == 0)
	printf("%i is zero\n", n);
else
	printf("%i is negative\n", n);

return (0)
}
