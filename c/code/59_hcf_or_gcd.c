// find hcf of two numbers
#include<stdio.h>
int main() {
	int i,num1,num2;
	scanf("%d%d",&num1,&num2);
	for(i=num1;i>0;i--) {
		if(num1%i == 0 && num2%i == 0) {
			printf("HCF of %d and %d is %d",num1,num2,i);
			break;
		}
	}
}
