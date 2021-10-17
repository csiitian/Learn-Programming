// prime number or not
// number should only be divided by 1 and itself 
#include<stdio.h>
int main() {
	int num;
	scanf("%d",&num);
	int i,flag = 0;
	for(i=2;i<num;i++) {
		if(num%i == 0) {
			flag = 1; 
			break;
		}
	}
	if(flag == 1) printf("%d is not a prime number",num);
	else printf("%d is a prime number",num);
}
// 17 = 1 & 17 prime number 
// 4 = 1 & 2 & 4 not prime number
