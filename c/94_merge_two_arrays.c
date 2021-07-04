#include<stdio.h>
int main() {
    int m,n;
    printf("Enter m and n :- ");
    scanf("%d%d", &m, &n);
    int arr1[m],arr2[n];
    printf("Enter %d number space separated for array-1 :- ", m);
    for(int i=0;i<m;i++) 
        scanf("%d", &arr1[i]);
    printf("Enter %d number space separated for array-2 :- ", n);
    for(int i=0;i<n;i++) 
        scanf("%d", &arr2[i]);
    int new_arr[m+n];
    for(int i=0;i<m;i++) {
        new_arr[i] = arr1[i];
    }
    for(int i=0;i<n;i++) {
        new_arr[m+i] = arr2[i];
    }
    printf("New Array :- \n");
    for(int i=0;i<m+n;i++) {
        printf("%d ", new_arr[i]);
    }
}

/*

Output :-
Enter m and n :- 3 5
Enter 3 number space separated for array-1 :- 2 6 1
Enter 5 number space separated for array-2 :- 1 9 6 2 0
New Array :-
2 6 1 1 9 6 2 0

*/