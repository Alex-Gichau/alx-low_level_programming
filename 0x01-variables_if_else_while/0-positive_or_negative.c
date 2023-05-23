#include <stdio.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	time_t t;
	time(&t);

	int n = (int) t;

	if (n >= 0)
		printf("%d is positive\n", n);
	else (n < 0)
		printf("%d is negative\n", n);
	
	return (0);
}
