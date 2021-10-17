// decimal to binary conversion
// 5 = 101
// 8 = 1000
#include<stdio.h>
int main() {
	int num;
	scanf("%d",&num);
	int sum = 0;
	int pow = 1;
	while(num > 0) {
		sum = sum + pow*(num%2);
		pow = pow*10;
		num = num/2;
	}
	printf("Equivalent Binary is %d",sum);
}
