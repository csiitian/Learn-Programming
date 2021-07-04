// binary to decimal conversion 
// 101 = 5 ( 2^2*1 + 2^1*0 + 2^0*1 )
// 1000 = 8 ( 2^3*1 + 2^2*0 + 2^1*0 + 2^0*0 )
#include<stdio.h>
int main() {
	int num;
	scanf("%d",&num);
	int sum = 0;
	int pow = 1;
	while(num > 0) {
		sum = sum + pow*(num%10);
		pow = pow*2;
		num = num/10;
	}
	printf("Equivalent Decimal is %d",sum);
}
