/* C program for Merge Sort */
#include <stdio.h>
#include <stdlib.h>

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	int left[n1], right[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		left[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		right[j] = arr[m + 1 + j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2) {
		if (left[i] <= right[j]) {
			arr[k] = left[i];
			i++;
		}
		else {
			arr[k] = right[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1) {
		arr[k] = left[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2) {
		arr[k] = right[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r)
{
	if (l < r) {
		int m = l + (r - l) / 2;
        // divide
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
        // merge
		merge(arr, l, m, r);
	}
}

// print array
void printArray(int arr[], int n)
{
	for (int i=0;i<n;i++)
		printf("%d ", arr[i]);
	printf("\n");
}

/* Driver code */
int main()
{
	int n;
    printf("Enter n :- ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers seperated by space :- ", n);
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);

	printf("Given array is :- \n");
	printArray(arr, n);

	mergeSort(arr, 0, n-1);

	printf("Sorted array is :-\n");
	printArray(arr, n);
	return 0;
}

/*

Output :-
Enter n :- 7
Enter 7 numbers seperated by space :- 12 1 -9 2 30 29 0
Given array is :-
12 1 -9 2 30 29 0
Sorted array is :-
-9 0 1 2 12 29 30

*/