// second smallest element in array 
// you can also do for second largest element in array
#include<stdio.h>
int main() {
	int arr[100];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	int small = INT_MIN,second_small = INT_MIN;
	for(i=0;i<n;i++) {
		if(small < arr[i]) {
			// since we have found smaller so now
			// prev samller becomes second smaller and 
			// update smaller to this newer element
			second_small = small;
			small = arr[i];
		} else if(second_small < arr[i]) {
			// if current element is greater than small
			// but smaller than second smaller so only
			// update second smaller element 
			second_small = arr[i];
		}
	}
}
