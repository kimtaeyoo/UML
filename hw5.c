#include<stdio.h>


int tans(int a)
{
	
	if (a < 2)
	{
		printf("%d",a);
	}
	else
	{
		tans(a / 2);
		printf("%d", a % 2);
	}
	
}
int main(void)
{
	int a = 0;
	printf("Please enter a number:");
	scanf("%d", &a);
	tans(a);
}