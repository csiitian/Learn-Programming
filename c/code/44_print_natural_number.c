#include<stdio.h>
int main() {
    int num;
    printf("Enter number :- ");
    scanf("%d", &num);
    printf("All Natural numbers upto n :- \n");
    for(int i=1;i<=num;i++) {
        printf("%d ", i);
    }
}

/* 

Output :- 

Enter number :- 12
All Natural numbers upto n :-
1 2 3 4 5 6 7 8 9 10 11 12

*/