	#include <stdio.h>
int main(void)
{
	int a = 0, b = 0;
	printf("2개의 정수를 입력해주세요:");
	scanf("%d %d", &a, &b);
	printf("%d & %d = %d\n", a, b, a & b);
	printf("%d | %d = %d\n", a, b, a | b);
	printf("%d ^ %d = %d", a, b, a ^ b);
	return 0;
}