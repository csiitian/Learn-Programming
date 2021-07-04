#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter three sides of triangle :- ");
    scanf("%d%d%d", &a, &b, &c);
    if(a == b && b == c) {
        // a == b == c
        printf("Equilateral Triangle");
    } else if(a == b || b == c || a == c){
        printf("Isosceles Triangle");
    } else {
        printf("Scalene Triangle");
    }
}

/*

Test Case-1
Output :-
Enter three sides of triangle :- 6 7 8
Scalene Triangle

Test Case-2
Output :-
Enter three sides of triangle :- 6 6 6
Equilateral Triangle

Test Case-3
Output :-
Enter three sides of triangle :- 6 7 6
Isosceles Triangle

*/