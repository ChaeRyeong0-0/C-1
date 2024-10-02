#include <stdio.h>

int main(void)
{
	int i,n;

	for (i = 0; i < 5; i++)
	{
		for (n = 0; n < 5 - i; n++)
			printf(" ");
		for (n = 0; n <= 2*i; n++)
			printf("*");

		printf("\n");
	}
	return 0;
}
