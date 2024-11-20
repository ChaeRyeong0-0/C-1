#include <stdio.h>
#include <math.h>

double sd(double arr[])
{
	int i;
	double sum = 0, v=0;
	double average, sd;

	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	average = sum / 5;

	for (i = 0; i < 5; i++)
	{
		v += pow((arr[i] - average), 2) / 5;
	}
	sd = sqrt(v);

	return sd;
}

int main(void)
{	
	double numbers[5];
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++)
		scanf("%lf", &numbers[i]);
	printf("Standard Deviation = %.3lf", (double)sd(numbers));
	
	return 0;
}

