// find lcm of two numbers
#include<stdio.h>
int main() {
	int i,num1,num2;
	scanf("%d%d",&num1,&num2);
	for(i=num1;;i++) {
		if(i%num1 == 0 && i%num2 == 0) {
			printf("LCM of %d and %d is %d",num1,num2,i);
			break;
		}
	}
}
