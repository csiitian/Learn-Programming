#include<stdio.h>
int fibonacci(int n) {
    if(n == 0 || n == 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
    int n;
    printf("Enter n :- ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++) {
        int ans = fibonacci(i);
        printf("%d ", ans);
    }
}

/*

Output :-
Enter n :- 9
0 1 1 2 3 5 8 13 21 34

*/