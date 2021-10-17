#include<stdio.h>
int freq_array(int *arr, int n, int key) {
    int count = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] == key) {
            count += 1;
        }
    }
    return count;
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
    int key;
    printf("Enter Key to find in Array :- ");
    scanf("%d", &key);
    int ret_freq = freq_array(arr, n, key);
    printf("%d occurs %d times", key, ret_freq);
}

/*

Output :-
Enter n :- 5
Enter 5 numbers seperated by space :- 1 1 5 9 1
Enter Key to find in Array :- 1
1 occurs 3 times

*/