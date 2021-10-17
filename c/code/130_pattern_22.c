#include<stdio.h>
int main() {
    int n;
    printf("Enter n :- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            printf("%d", i-j+1);
        }
        for(int k=0;k<=i;k++) {
            printf("%d", k+1);
        }
        printf("\n");
    }
}

/*

Output :-
Enter n :- 5
1
212
32123
4321234
543212345

*/