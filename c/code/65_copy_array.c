// copy one array to another array
#include<stdio.h>
int main() {
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	// copy to new array
	int new_arr[n];
	for(i=0;i<n;i++) new_arr[i] = arr[i];
}
