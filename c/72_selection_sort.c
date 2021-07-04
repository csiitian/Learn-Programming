// selection sort
#include<stdio.h>
int main() {
	int i,j,n;
	printf("Enter n :- ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers seperated by space :- ", n);
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++) {
		int temp = i; 
		for(j=i+1;j<n;j++) {
			if(arr[temp] > arr[j]) temp = j;
		}
		// swap temp and j
		int swap = arr[temp];
		arr[temp] = arr[i];
		arr[i] = swap;
	}
	printf("Sorted array is \n");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
}
