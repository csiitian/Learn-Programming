// find freq of array elements
#include<stdio.h>
int main() {
	int i,n;
	printf("Enter n :- ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers seperated by space :- ", n);
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	int key;
	printf("Enter key to be Searched :- ");
	scanf("%d",&key);
	int freq = 0;
	for(int i=0;i<n;i++) 
		if(arr[i] == key)
			freq = freq + 1;
	printf("%d appears %d times", key, freq);	
}
