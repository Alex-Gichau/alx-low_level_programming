#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	time_t t;

	time(&t);

	int n = (int)t;

	if (n < 0)
	{
		n = -n;
	}

	int lastDigit = n % 10;

	printf("The last number is: %d\n", lastDigit);

	return (0);
}
