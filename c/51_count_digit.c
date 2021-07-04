#include<stdio.h>
int main() {
    int num;
    printf("Enter number :- ");
    scanf("%d", &num);
    int temp = num;
    int count = 0;
    while(temp > 0) {
        temp = temp/10;
        count++;
    }
    printf("Number of digits in %d is %d", num, count);
}

/*
 * Output :-
 * Enter number :- 291831
 * Number of digits in 291831 is 6
 *
 */