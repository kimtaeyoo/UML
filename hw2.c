	#include<stdio.h>
int main(void)
{
	double a = 0;
	double b = 1.609;	
	printf("Please enter kilometers:");
	scanf("%lf",&a );
	b = a / b;
	printf("%.1f km is equal to %.1f miles.\n", a, b);
}