#include <stdio.h>

void binary(int num)
{
	
	if (num > 1)	
		binary(num/2);

	printf("%d", num % 2);
	
}

int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);

	if (num > 0)
		binary(num);
	else
		printf("양의 정수를 입력하세요.");

	return 0;
}
