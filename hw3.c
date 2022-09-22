#include<stdio.h>
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int a = 1;
	int b = 4;
	
	for (i = 1; i <= 5; i++)
	{
	
		for (k=1; k<=b; k++)
		{
			printf(" ");
		}
		b = b - 1;
		
		for (j = 1; j <= a; j++)
		{
			printf("*");
		}
		printf("\n");
		a = a + 2;
	}
	return 0;
	


}
