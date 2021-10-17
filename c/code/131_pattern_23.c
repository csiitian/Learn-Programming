#include<stdio.h>
int main() {
    int n;
    printf("Enter n :- ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        printf((3*i-1)/2);
        if(i%2 == 0) {
            printf("%d", (3*i+1)/2);
        }
        printf("\n");
    }
}

/*

Output :-
Enter n :- 5
1
23
4
56
7

*/