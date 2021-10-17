#include<stdio.h>
int main() {
    int n;
    printf("Enter n :- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=n-1;j>i;j--) {
            printf(" ");
        }
        for(int k=0;k<2*(i+1);k++) {
            if(k == 0) printf("/");
            else if(k == 2*(i+1)-1) printf("\\");
            else if(n/2 == i) printf("_");
            else printf(" ");
        }
        printf("\n");
    }
}

/*

Output :-
Enter n :- 5
    /\
   /  \
  /____\
 /      \
/        \

*/