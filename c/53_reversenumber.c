#include<stdio.h>
int main() {
    int num;
    printf("Enter number :- ");
    scanf("%d", &num);
    int temp = num;
    int rev = 0;
    while(temp > 0) {
        int last_digit = temp%10;
        temp = temp/10;
        rev = rev*10 + last_digit;
    }
    printf("Reverse of %d is %d", num, rev);
}

/*
 * Output :-
 * Enter number :- 12391
 * Reverse of 12391 is 19321
 *
 */