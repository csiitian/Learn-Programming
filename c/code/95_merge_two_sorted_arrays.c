#include<stdio.h>
int main() {
    int m,n;
    printf("Enter m and n :- ");
    scanf("%d%d", &m, &n);
    int arr1[m],arr2[n];
    printf("Enter %d number space separated in sorted "
            "order for array-1 :- ", m);
    for(int i=0;i<m;i++) 
        scanf("%d", &arr1[i]);
    printf("Enter %d number space separated in sorted "
            "order for array-2 :- ", n);
    for(int i=0;i<n;i++) 
        scanf("%d", &arr2[i]);
    int new_arr[m+n];
    int i=m-1, j=n-1, k=m+n-1;
    while(i >= 0 && j >= 0) {
        if(arr1[i] > arr2[j]) {
            new_arr[k] = arr1[i];
            i--;
            k--;
        } else {
            new_arr[k] = arr2[j];
            j--;
            k--;
        }
    }
    while(i >= 0) {
        new_arr[k] = arr1[i];
        i--;
        k--;
    }
    while(j >= 0) {
        new_arr[k] = arr2[j];
        j--;
        k--;
    }
    printf("New Array in Sorted Order :- \n");
    for(int i=0;i<m+n;i++) {
        printf("%d ", new_arr[i]);
    }
}

/*

Output :-
Enter m and n :- 3 5
Enter 3 number space separated in sorted order for array-1 :- 1 6 9
Enter 5 number space separated in sorted order for array-2 :- -12 -1 3 5 10
New Array in Sorted Order :-
-12 -1 1 3 5 6 9 10

*/