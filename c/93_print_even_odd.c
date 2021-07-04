// print even & odd numbers between
// 1 to n (inclusive)
#include<stdio.h>
int main() {
	int i,n;
	scanf("%d",&n);
	printf("Even Numbers :- ");
	for(int i=2;i<=n;i+=2) printf("%d ",i);
	printf("\nOdd Numbers :- ");
	for(int i=1;i<=n;i+=2) printf("%d ",i);
}
