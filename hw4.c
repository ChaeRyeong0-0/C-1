#include <stdio.h>

int main(void)
{
	int num;
	int i;
	int sum = 0;

	printf("Please enter a number: ");
	scanf("%d", &num);

	for (i=1;i <= num;i++)
		if (num % i == 0)
		{
			sum = sum + i;
		}
	
	if (sum == (num + 1))
		printf("It is a prime number.");
	else	
		printf("It is not a prime number.");
	
	return 0;
}

