#include <stdio.h>
int change(int c) {
	int d = 'a' - 'A';
	if ('a' <= c && 'z' >= c)
		return c - d;
	else if ('A' <= c && 'Z' >= c)
		return c + d;
	else
		return c;
}

int main(void) {
	char a[100];
	int c,i,len;
	printf("Input>");
	scanf("%[^\n]s", a);
	len = strlen(a);
	printf("Output>");
	for (i = 0; i < len; i++) {
		c = change(a[i]);
		printf("%c", c);
	}
	
	return 0;
}
	