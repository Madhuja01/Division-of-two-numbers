#include<stdio.h>
int main() {
	int x, y, z;
	printf("Enter two numbers: ");
	scanf("%d%d", &x, &y);
	if(y==0) {
		printf("Division not possible");
	}
	else {
		z = x/y;
		printf("%d", z);
	}
	return 0;
}
