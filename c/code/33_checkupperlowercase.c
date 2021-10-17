#include<stdio.h>
int main() {
    char x;
    printf("Enter character :- ");
    scanf("%c", &x);
    if(x >= 'A' && x <= 'Z') {
        printf("%c is in uppercase", x);
    } else if(x >= 'a' && x <= 'z') {
        printf("%c is in lowercase", x);
    } else {
        printf("%c is not in alphabets", x);
    }
}

/*
 * Output :-
 * Enter character :- 3
 * 3 is not in alphabets
 *
 */