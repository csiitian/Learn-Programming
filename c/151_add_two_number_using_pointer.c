// program to add two number using pointer
#include<stdio.h>
int main() {
	int a,b,*p1,*p2;
	scanf("%d%d",&a,&b);
	p1 = &a;
	p2 = &b;
	int sum = *p1 + *p2;
	printf("%d + %d = %d",a,b,sum);
}
