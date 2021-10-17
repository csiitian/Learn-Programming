// octal to binary
// 21 => 10001
#include<stdio.h>
int main() {
	int num;
	scanf("%d",&num);
	// first change it into decimal
	int sum = 0;
	int pow = 1;
	while(num > 0) {
		sum = sum + pow*(num%10);
		pow = pow*8;
		num = num/10;
	}
	// now change it into decimal
	num = sum; // now this sum is num for this conversion
	sum = 0;
	pow = 1;
	while(num > 0) {
		sum = sum + pow*(num%2);
		pow = pow*10;
		num = num/2;
	}
	printf("Equivalent Binary Representation is %d",sum);
}
