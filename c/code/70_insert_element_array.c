// insert new element into array
#include<stdio.h>
int main() {
	int i,n; // n is array size
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);	
	int pos,val; // position and value which we have to insert
	scanf("%d%d",&pos,&val);
	// for inserting first we have to shift right after position
	// first check if position is valid or not
	if(pos>=0 && pos<n) {
		for(int i=n-1;i>pos&&i>0;i--) arr[i] = arr[i-1];
		arr[pos] = val;//now insert at pos
	}
}
