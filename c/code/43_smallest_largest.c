// smallest and largest element in array
#include<stdio.h>
int main() {
	int arr[100];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	// print array
	for(i=0;i<n;i++) printf("%d ",arr[i]);
	int min = INT_MAX,max = INT_MIN;
	for(i=0;i<n;i++) {
		// if current element is smaller then min then update min
		if(min > arr[i]) min = arr[i];
		// if current element is larger then max then update max
		if(max < arr[i]) max = arr[i];
	}	
	printf("Minimum is %d and Maximum is %d",min,max);
}
