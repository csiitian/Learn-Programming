#include<stdio.h>
int main() {
    int a,b,op;
    printf("Enter two numbers :- ");
    scanf("%d%d", &a, &b);
    printf("Enter 1 for addition\n"
    "Enter 2 for subtraction\n"
    "Enter 3 for multiplication\n"
    "Enter 4 for division\n");
    scanf("%d", &op);
    if(op == 1) {
        printf("%d + %d = %d", a, b, a+b);
    } else if(op == 2) {
        printf("%d - %d = %d", a, b, a-b);
    } else if(op == 3) {
        printf("%d * %d = %d", a, b, a*b);
    } else {
        printf("%d / %d = %.2f", a, b, a/(b+0.0));
    }
}

/*

Test Case-1 
Output :-
Enter two numbers :- 12 5
Enter 1 for addition
Enter 2 for subtraction
Enter 3 for multiplication
Enter 4 for division
1
12 + 5 = 17


Test Case-2
Output :-
Enter two numbers :- 12 5
Enter 1 for addition
Enter 2 for subtraction
Enter 3 for multiplication
Enter 4 for division
2
12 - 5 = 7


Test Case-3
Output :-
Enter two numbers :- 12 5
Enter 1 for addition
Enter 2 for subtraction
Enter 3 for multiplication
Enter 4 for division
3
12 * 5 = 60


Test Case-4 
Output :-
Enter two numbers :- 12 5
Enter 1 for addition
Enter 2 for subtraction
Enter 3 for multiplication
Enter 4 for division
4
12 + 5 = 2.40

*/