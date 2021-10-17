// octal to decimal
#include<stdio.h>
int main() {
	int num;
	scanf("%d",&num);
	int sum = 0;
	int pow = 1;
	while(num > 0) {
		sum = sum + pow*(num%10);
		pow = pow*8;
		num = num/10;
	}
	printf("Equivalent Decimal is %d",sum);
}
