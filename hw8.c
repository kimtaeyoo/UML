#include<stdio.h>
#include <math.h>
double A(double* p) {
	int i;
	double s1=0;
	double s2=0;
	double r = 0;
	for (i = 0; i < 5; i++) {
		s1 += p[i];
	}
	s1 /= 5;
	for (i = 0; i < 5; i++) {
		s2 += pow((p[i] - s1), 2);
	}
	s2 /= 5;
	return sqrt(s2);
}

int main(void) {
	double arr[5];
	printf("Enter 5 real numbers:");
	scanf("%lf %lf %lf %lf %lf",&arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("Standard Deviation = %.3f", A(arr));
}
