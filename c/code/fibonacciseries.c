#include<stdio.h>
int main() {
    int num;
    printf("Enter number :- ");
    scanf("%d", &num);
    int a=0,b=1;
    while(a < num) {
        printf("%d ",a);
        b = a + b;
        a = b - a;
    }
}

/*
 * Output :-
 * Enter number :- 20
 * 0 1 1 2 3 5 8 13
 *
 */