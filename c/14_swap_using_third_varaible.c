// swap two numbers using third variable
#include<stdio.h>
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Before swap : a = %d and b = %d",a,b);
	int temp = a;
	a = b;
	b = temp;
	printf("After swap : a = %d and b = %d",a,b);
}
