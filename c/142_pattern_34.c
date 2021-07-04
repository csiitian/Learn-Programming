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
    scanf("%d",&n);
    for(int i=0;i<2*n-1;i++) {
        int x = min(i+1,2*n-(i+1));
        printf("%d", x);
        for(int j=0;j<2*x-1;j++) {
            printf(" ");
        }
        printf("%d\n", x);
    }
}

/*

Output :-
Enter n :- 5
1 1
2   2
3     3
4       4
5         5
4       4
3     3
2   2
1 1

*/