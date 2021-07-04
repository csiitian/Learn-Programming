// condition operator
#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	// check number is even or odd using conditional statement
	(n%2 == 0) ? printf("n is even") : printf("n is odd");
	//check number is positive or negative using conditional statement
	(n >= 0) ? printf("n is positive") : printf("n is negative");
}
