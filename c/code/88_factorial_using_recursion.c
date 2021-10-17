// find factorial using recursion
#include<stdio.h>
int find_fact(int n) {
	if(n == 0 || n == 1) return 1;
	return n*find_fact(n-1);
}
int main() {
	int num;
	scanf("%d",&num);
	int fact = find_fact(n);
	printf("factorial of %d is %d",num,fact);
}