#include<stdio.h>
int main() {
    int n;
    printf("Enter n :- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            printf(" ");
        }
        for(int k=0;k<2*(n-i-1);k++) {
            if(k==0) printf("*");
            else printf(" ");
        }
        printf("*\n");
    }
}

/*

Output :-
Enter n :- 5
*       *
 *     *
  *   *
   * *
    *

*/