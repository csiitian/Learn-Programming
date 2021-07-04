#include<stdio.h>
int min(int a, int b) {
    return a < b ? a : b;
}
int main() {
    int n;
    printf("Enter n :- ");
    scanf("%d",&n);
    for(int i=0;i<2*n;i++) {
        for(int k=0;k<=min(i,2*n-i-1);k++) {
            printf("*");
        }
        printf("\n");
    }
}

/*

Output :-
Enter n :- 5
*
**
***
****
*****
*****
****
***
**
*

*/