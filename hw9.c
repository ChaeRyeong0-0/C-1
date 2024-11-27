#include <stdio.h>
#include <string.h>

void converse(char str[])
{
	int i;
	const int diff = 'a' - 'A';
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += diff;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= diff;
	}
}
int main(void)
{
	char str[100];
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str)-1] = '\0';
	
	converse(str);
	printf("Output> %s\n", str);

	return 0;
}