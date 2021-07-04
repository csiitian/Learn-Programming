#include<stdio.h>
long sum_array(int *arr, int n) {
    long sum = 0;
    for(int i=0;i<n;i++) {
        sum = sum + arr[i];
    }
    return sum;
}
int main() {
    int n;
    printf("Enter n :- ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers seperated by space :- ", n);
    for(int i=0;i<n;i++) 
        scanf("%d",&arr[i]);
    // array size = sizeof(arr)/sizeof(arr[0])
    long ret_sum = sum_array(arr, n);
    printf("Sum is :- %ld", ret_sum);
}

/*

Output :-
Enter n :- 5
Enter 5 numbers seperated by space :- 1 2 3 4 5
Sum is :- 15

*/