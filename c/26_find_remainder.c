#include<stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers :- ");
    scanf("%d%d", &a,&b);
    int rem = a % b;
    printf("Remainder after dividing %d by %d is :- %d",
            a, b, rem);
}

/*

Output :-
Enter two numbers :- 12 5
Remainder after dividing 12 by 5 is :- 2

*/