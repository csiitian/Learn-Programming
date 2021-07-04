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
    if(num == rev) {
        // number is palindrome
        printf("%d is palindrome", num);
    } else {
        printf("%d is not palindrome", num);
    }
}

/*
 * Output :-
 * Enter number :- 56765
 * 56765 is palindrome
 *
 */