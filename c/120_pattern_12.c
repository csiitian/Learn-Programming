#include<stdio.h>
int main() {
    int n;
    printf("Enter n :- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i == 0 || i == n-1) {
                printf("*");
            }
            else {
                if(n/2 == j) printf("*");
                else printf(" ");
            }
        }
        printf("\n");
    }
}

/*

Output :-
Enter n :- 5
*****
  *
  *
  *
*****

*/