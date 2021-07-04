// swap two numbers without third variable
#include<stdio.h>
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Before swap : a = %d and b = %d",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After swap : a = %d and b = %d",a,b);
}
