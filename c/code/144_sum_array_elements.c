// sum of elements of array
#include<stdio.h>
int main() {
	int arr[100];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	int sum = 0;
	for(i=0;i<n;i++) sum = sum + arr[i];
	printf("Sum of All elements is %d",sum);
}
