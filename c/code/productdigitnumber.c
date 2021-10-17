#include<stdio.h>
int main() {
    int num;
    printf("Enter number :- ");
    scanf("%d", &num);
    int temp = num;
    long long prod = 1;
    while(temp > 0) {
        int last_digit = temp%10;
        temp = temp/10;
        prod = prod * last_digit;
    }
    printf("Product of all digits of %d is %lld", num, prod);
}

/*
 * Output :-
 * Enter number :- 2312
 * Product of all digits of 2312 is 12
 *
 */