#include<stdio.h>
/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition (int arr[], int low, int high) {
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates 
    // the right position of pivot found so far
    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // increment index of smaller element
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}
 
/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
 
/* Function to print an array */
void printArray(int arr[], int n) {
	for (int i=0;i<n;i++)
		printf("%d ", arr[i]);
	printf("\n");
}
 
// Driver Code
int main()
{
    int n;
    printf("Enter n :- ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers seperated by space :- ", n);
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);

	printf("Given array is :-\n");
	printArray(arr, n);

    quickSort(arr, 0, n - 1);
    printf("Sorted array is :-\n");
    printArray(arr, n);
    return 0;
}

/*

Output :-
Enter n :- 7
Enter 7 numbers seperated by space :- 12 2 9 1 15 8 -5
Given array is :-
12 2 9 1 15 8 -5
Sorted array is :-
-5 1 2 8 9 12 15

*/