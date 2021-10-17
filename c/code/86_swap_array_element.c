#include<stdio.h>
void swap_array(int *arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int main() {
    int n;
    printf("Enter n :- ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers seperated by space :- ", n);
    for(int i=0;i<n;i++) 
        scanf("%d", &arr[i]);
    // array size = sizeof(arr)/sizeof(arr[0])
    int i=0,j=n-1; // swap first and last element 
    swap_array(arr, i, j);
    printf("After Swapping :- ");
    for(int i=0;i<n;i++) 
        printf("%d ", arr[i]);
}

/*

Output :-
Enter n :- 5
Enter 5 numbers seperated by space :- 1 2 3 4 5
After Swapping :- 5 2 3 4 1

*/