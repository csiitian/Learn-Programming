#include<stdio.h>
int main() {
    int n;
    printf("Enter n :- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=n-1;j>i;j--) {
            printf(" ");
        }
        printf("/");
        for(int k=0;k<2*i;k++) {
            if(k%2 == 0) printf("/");
            else printf("\\");
        }
        printf("\\");
        printf("\n");
    }
}

/*

Output :-
Enter n :- 5
    /\
   //\\
  //\/\\
 //\/\/\\
//\/\/\/\\

*/