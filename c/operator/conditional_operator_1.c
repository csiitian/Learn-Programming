// check positive or negative numbers
// using conditional statement
#include<stdio.h>
int main() {
    int num;
    printf("Enter number :- ");
    scanf("%d", &num);

    // conditional statement
    // (expression) ? statement1 : statement2
    // if expression is true statement1 will be execuated
    // if expression is false statement2 will be executed

    // written in 3 lines to make it more readable
    (num > 0) ? 
    printf("%d is positive", num) : // statement1
    printf("%d is negative", num); // statement2


}

/*

Output :-
Enter number :- -12
-12 is negative

*/