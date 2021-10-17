// delete  an element from an array
#include<stdio.h>
int main() {
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	int del_pos;
	scanf("%d",&del_pos);
	// shift left from delete position and decrease size of array by 1
	if(del_pos>=0 && del_pos<n) {
		for(i=del_pos;i<n-1;i++) arr[del_pos] = arr[del_pos+1];
		n = n -1;
	}
}
