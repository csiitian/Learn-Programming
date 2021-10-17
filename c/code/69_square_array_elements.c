// input and display array elements in reverse order
#include<stdio.h>
int main() {
	int i,n;
	printf("Enter n :- ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers seperated by space :- ", n);
	for(i=0;i<n;i++) 
		scanf("%d",&arr[i]);
	// square all elements
	for(i=0;i<n;i++) 
		arr[i] = arr[i]*arr[i];
	// display array elements
	printf("Array Elements after squaring are :- ");
	for(i=0;i<n;i++) 
		printf("%d ",arr[i]);
}

/*

Output :-
Enter n :- 5
Enter 5 numbers seperated by space :- 12 27 11 7 78
Array Elements after squaring are :- 144 729 121 49 6084

*/