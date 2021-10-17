#include<stdio.h>
int main() {
    int a = 12, b = 7;
    int sum = a + b; // + operator
    int sub = a - b; // - operator
    int mult = a * b; // * operator
    int div = a / b; // / operator
    int rem = a % b; // % operator
    printf("( Addition ) %d + %d = %d\n", a,b, sum);
    printf("( Subtraction ) %d - %d = %d\n", a,b, sub);
    printf("( Multiplication ) %d * %d = %d\n", a,b, mult);
    printf("( Division ) %d / %d = %d\n", a,b, div);
    printf("( Remainder ) %d %% %d = %d\n", a,b, rem);
    // %% is used to print %
    return 0;
}

/*

Output :-
( Addition ) 12 + 7 = 19
( Subtraction ) 12 - 7 = 5
( Multiplication ) 12 * 7 = 84
( Division ) 12 / 7 = 1
( Remainder ) 12 % 7 = 5

*/