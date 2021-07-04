/*
 * Problem Statement :- You have given two numbers 
 * find product of these two numbers and print it
 *
 */

#include<stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers :- ");
    scanf("%d%d", &num1, &num2);
    // remember to use & in scanf
    int mul = num1 * num2;
    printf("%d * %d = %d", num1, num2, mul);
    // alternative you can perfom mathematical
    // operation in printf itself
    // printf("%d * %d = %d", num1, num2, num1 * num2);
    return 0;
}

/*
 * Output :-
 * Enter two numbers :- 12 5
 * 12 * 5 = 60
 *
 */