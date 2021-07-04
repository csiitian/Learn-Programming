#include<stdio.h>
int main() {
    int age;
    printf("Enter your age :- ");
    scanf("%d", &age);
    if(age >= 18) {
        printf("Congratulation, you can vote");
    } else {
        printf("Sorry, you are not eligible to vote\n");
        printf("but you can vote after %d years", 18-age);
    }
    return 0;
}

/*
 * Output :-
 * Enter your age :- 12
 * Sorry, you are not eligible to vote
 * but you can vote after 6 years
 *
 */