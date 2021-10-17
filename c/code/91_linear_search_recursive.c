#include<stdio.h>
int linear_search(int *arr, int key, int start, int end) {
    if(start > end) return -1;
    if(arr[start] == key) return start;
    return linear_search(arr, key, start+1, end); 
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
	int search_index = linear_search(arr, key, 0, n-1);
    if(search_index == -1) printf("Oops, %d not found", key);
	else printf("Congratulation, %d found at %d position", key, search_index);
}

/*

Test Case-1
Output :-
Enter n :- 5
Enter 5 numbers seperated by space :- 2 5 7 9 10
Enter key to be Searched :- 7
Congratulation, 7 found at 2 position

Test Case-2
Output :-
Enter n :- 5
Enter 5 numbers seperated by space :- 2 5 7 9 10
Enter key to be Searched :- 1
Oops, 1 not found

*/