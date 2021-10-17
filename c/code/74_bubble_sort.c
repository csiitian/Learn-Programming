// bubble sort
#include<stdio.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	// bubble sort
	for(i=0;i<n-1;i++) {
		for(j=0;j<n-i-1;j++) {
			if(arr[j] > arr[j+1]) {
				// swap
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(i=0;i<n;i++) printf("%d ",arr[i]);
}
