// find average of n numbers
#include<stdio.h>
int main() {
	int n;
	printf("Enter n :- ");
	scanf("%d",&n);
	long long prod = 1;
	int temp;
	printf("Enter %d numbers seperated by space :- ", n);
	for(int i=0;i<n;i++) {
		scanf("%d",&temp);
		prod = (long long) (prod * temp);
	}
	printf("Product of All Numbers is %lld", prod);
}

/*
 
Output :- 
Enter n :- 3
Enter 3 numbers seperated by space :- 12738912 12389 1231211
Product of All Numbers is 194312651247750048

 */