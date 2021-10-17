#include<stdio.h>
int min(int a, int b) {
    return a < b ? a : b;
}
int abs(int a) {
    return a < 0 ? -a : a;
}
int main() {
    int n;
    printf("Enter n :- ");
    scanf("%d", &n);
    for(int i=0;i<2*n-1;i++) {
        printf("%d ", min(i+1,2*n-(i+1)));
    }
    printf("\n");
    for(int i=0;i<2*n-1;i++) {
        printf("%d ", abs(n-i-1));
    }
    printf("\n");
    for(int i=0;i<2*n;i++) {
        printf("%d ", 1+min(i,2*n-i-1));
    }
}

/*

Output :-
Enter n :- 5
1 2 3 4 5 4 3 2 1 
4 3 2 1 0 1 2 3 4 
1 2 3 4 5 5 4 3 2 1

*/