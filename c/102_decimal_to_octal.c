// Decimal to octal
#include<stdio.h>
int main() {
	int num;
	scanf("%d",&num);
	int sum = 0;
	int pow = 1;
	while(num > 0) {
		sum = sum + pow*(num%8);
		pow = pow*10;
		num = num/8;
	}
	printf("Equivalent Octal is %d",sum);
}
