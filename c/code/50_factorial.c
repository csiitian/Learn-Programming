#include<stdio.h>
int main() {
    int num;
    printf("Enter number :- ");
    scanf("%d", &num);
    long long fact = 1;
    // since factorial can be large
    for(int i=1;i<=num;i++) {
        fact = fact*i;
    }
    printf("Factorial of %d is %lld", num, fact);
}

/*
 * Output :-
 * Enter number :- 10
 * Factorial of 10 is 3628800
 *
 */