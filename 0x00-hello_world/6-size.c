#include<stdio.h>

int main(void)
{
	int i;
	char c;
	float f;
	long int j;
	long long int k;

	printf("Integer : %lu bytes\n", (unsigned long)sizeof(i));
	printf("Character : %lu bytes\n", (unsigned long)sizeof(c));
	printf("Float : %lu bytes\n", (unsigned long)sizeof(f));
	printf("Long int : %lu bytes\n", (unsigned long)sizeof(j));
	printf("Long Long int : %lu bytes\n", (unsigned long)sizeof(k));
	return (0);
}
