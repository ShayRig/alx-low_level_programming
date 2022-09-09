#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether 
 *
 * Return: Always 0 (Success/Correct)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n > 0)

		printf("%d is positive\n", n);

	elseif(n < 0)

		printf("%d is negative\n", n);

	else
		printf("%d is positive\n", n);


return (0);
}
