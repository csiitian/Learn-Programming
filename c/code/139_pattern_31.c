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
        for(int j=0;j<abs(n-i-1);j++) {
            printf(" ");
        }
        for(int j=0;j<min(i+1,2*n-(i+1));j++) {
            printf("* ");
        }
        printf("\n");
    }
}

/*

Output :-
Enter n :- 5
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/