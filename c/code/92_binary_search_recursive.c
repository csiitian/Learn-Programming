#include<stdio.h>
int binary_search(int *arr, int key, int start, int end) {
    if(start > end) return -1;
	int mid = (start+end)/2;
    if(arr[mid] == key) return mid;
	else if(arr[mid] < key) {
    	return binary_search(arr, key, mid+1, end); 
	} else {
    	return binary_search(arr, key, start, mid-1); 
	}
}
int main() {
    int i,n;
    printf("Enter n :- ");
	scanf("%d",&n);
	int arr[n];
    printf("Enter %d numbers seperated by space :- ", n);
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	int key;
	printf("Enter key to be Searched :- ");
	scanf("%d", &key);
	int search_index = binary_search(arr, key, 0, n-1);
    if(search_index == -1) printf("Oops, %d not found", key);
	else printf("Congratulation, %d found at %d position", key, search_index);
}

/*

Test Case-1
Output :-
Enter n :- 5
Enter 5 numbers seperated by space :- 2 5 7 9 10
Enter key to be Searched :- 5
Congratulation, 5 found at 1 position

Test Case-2
Output :-
Enter n :- 5
Enter 5 numbers seperated by space :- 2 5 7 9 10
Enter key to be Searched :- 1
Oops, 1 not found

*/