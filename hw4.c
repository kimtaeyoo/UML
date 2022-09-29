#include<stdio.h>
int main(void)
{

	int a = 0;
	int i = 0;
	printf("Please enter a number:");
	scanf("%d", &a);
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			printf("It is not a prime number.");
			break;
		}
	}
	if (a == i)
	{
		printf("It is a prime number.");
	}

	return 0;
	
	
}