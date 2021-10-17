#include<stdio.h>
int main() {
    int marks;
    printf("Enter marks :- ");
    scanf("%d", &marks);
    if(marks >= 90) {
        printf("You got A Grade");
    } else if(marks >= 80) {
        printf("You got B Grade");
    } else if(marks >= 70) {
        printf("You got C Grade");
    } else if(marks >= 60) {
        printf("You got D Grade");
    } else if(marks >= 50) {
        printf("You got E Grade");
    } else {
        printf("You failed, Try Next Time !!!");
    }
}

/*
 * Output :-
 * Enter marks :- 20
 * You failed, Try Next Time !!!
 *
 * Output :-
 * Enter marks :- 95
 * You got A Grade
 *
 */