// input and display array elements in reverse order
#include<stdio.h>
int main() {
	int i,n;
	printf("Enter n :- ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers seperated by space :- ", n);
	for(i=0;i<n;i++) 
		scanf("%d", &arr[i]);
	// display array elements in reverse order
	printf("Array Elements in reverse order are :- ");
	for(i=n-1;i>=0;i--) 
		printf("%d ", arr[i]);
}

/*

Output :-
Enter n :- 5
Enter 5 numbers seperated by space :- 12 27 11 7 78
Array Elements in reverse order are :- 78 7 11 27 12

*/