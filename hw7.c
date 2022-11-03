#include<stdio.h>
int main(void) {
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int* p1 = arr1;
	int* p2 = arr2;
	int i,p;
	
	printf("arr1:");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\narr2:");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");

	for (i = 0; i < 6; i++) {
		p = *p1;
		*p1 = *p2;
		*p2 = p;
		p1++;
		p2++;
	}
	
	printf("\nafter swap\n");
	printf("arr1:");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\narr2:");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}
	return 0;
}
