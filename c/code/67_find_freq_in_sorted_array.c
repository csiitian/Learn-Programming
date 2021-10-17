// find freq of array elements
#include<stdio.h>
int first_occurence(int *arr, int key, int start, int end) {
    if(start > end) return -1;
	int mid = (start+end)/2;
    if(arr[mid] == key) {
		if(mid > 0 && arr[mid] == arr[mid-1]) {
			return first_occurence(arr, key, start, mid-1); 
		} else {
			return mid;
		}
	} else if(arr[mid] < key) {
    	return first_occurence(arr, key, mid+1, end); 
	} else {
    	return first_occurence(arr, key, start, mid-1); 
	}
}
int last_occurence(int *arr, int key, int start, int end, int n) {
    if(start > end) return -1;
	int mid = (start+end)/2;
    if(arr[mid] == key) {
		if(mid < n-1 && arr[mid] == arr[mid+1]) {
			return last_occurence(arr, key, mid+1, end, n); 
		} else {
			return mid;
		}
	} else if(arr[mid] < key) {
    	return last_occurence(arr, key, mid+1, end, n); 
	} else {
    	return last_occurence(arr, key, start, mid-1, n); 
	}
}
int main() {
	int i,n;
	printf("Enter n :- ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers seperated by space :- ", n);
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	int key;
	printf("Enter key to be Searched :- ");
	scanf("%d", &key);
	int a = first_occurence(arr, key, 0, n-1);
	int b = last_occurence(arr, key, 0, n-1, n);
	int freq = 0;
	if(a != -1) {
		freq = b-a+1;
	}
	printf("%d appears %d times", key, freq);	
}


/*

Test Case-1
Output :-
Enter n :- 5
Enter 5 numbers seperated by space :- -2 1 1 1 1
Enter key to be Searched :- 1
1 appears 4 times

Test Case-2
Output :-
Enter n :- 5
Enter 5 numbers seperated by space :- 0 1 1 1 1
Enter key to be Searched :- -2
-2 appears 0 times

*/