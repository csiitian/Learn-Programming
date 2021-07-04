/*
 * Problem Statement :- You have given two numbers 
 * find sum of these two numbers and print it
 *
 */

#include<stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers :- ");
    scanf("%d%d", &num1, &num2);
    // remember to use & in scanf
    int sum = num1 + num2;
    int sub = num1 - num2;
    printf("%d + %d = %d", num1, num2, sum);
    printf("%d - %d = %d", num1, num2, sub);
    // alternative you can perfom mathematical
    // operation in printf itself
    // printf("%d + %d = %d", num1, num2, num1 + num2);
    // printf("%d - %d = %d", num1, num2, num1 - num2);
    return 0;
}

/*
 * Output :-
 * Enter two numbers :- 12 25
 * 12 + 25 = 37
 * 12 - 25 = -13
 */