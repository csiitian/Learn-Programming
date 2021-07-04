#include<stdio.h>
int main() {
    int num;
    printf("Enter number :- ");
    scanf("%d", &num);
    for(int i=1;i<=10;i++) {
        printf("%d * %d = %d\n", num, i, (num*i));
    }
    // alternative
    // printf("%-3d * %2d = %d\n", num, i, (num*i));
}


/*
 * Output :-
 * Enter number :- 5
 * 5 * 1 = 5
 * 5 * 2 = 10
 * 5 * 3 = 15
 * 5 * 4 = 20
 * 5 * 5 = 25
 * 5 * 6 = 30
 * 5 * 7 = 35
 * 5 * 8 = 40
 * 5 * 9 = 45
 * 5 * 10 = 50
 *
 */