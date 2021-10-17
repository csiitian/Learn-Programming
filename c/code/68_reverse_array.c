// reverse array
#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	// first swap with last 
	// second swap with second last
	// 0 1 2 3 4 5 (6/2 = 3) swap 0 to 2
	// 0 1 2 3 4 (5/2 = 2) swap 0 to 1
	for(i=0;i<n/2;i++) {
		int temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;
	}
	// print array
	for(i=0;i<n;i++) printf("%d ",arr[i]);
}
