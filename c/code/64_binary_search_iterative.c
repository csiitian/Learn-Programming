// search element in array
#include<stdio.h>
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
	int start = 0, end = n-1;
	int search_index = -1;
	while(start <= end) {
		int mid = (start+end)/2;
		if(arr[mid] == key) {
			search_index = mid;
			break;
		} else if(arr[mid] < key) {
			start = mid+1;
		} else {
			end = mid-1;
		}
	}
	if(search_index == -1) printf("Oops, %d not found", key);
	else printf("Congratulation, %d found at %d position", key,search_index);
}

/*

Test Case-1
Output :-
Enter n :- 5
Enter 5 numbers seperated by space :- 2 5 7 9 10
Enter key to be Searched :- 9
Congratulation, 9 found at 3 position

Test Case-2
Output :-
Enter n :- 5
Enter 5 numbers seperated by space :- 2 5 7 9 10
Enter key to be Searched :- 1
Oops, 1 not found

*/
