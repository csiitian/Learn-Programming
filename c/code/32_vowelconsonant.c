#include<stdio.h>
int main() {
    char x;
    printf("Enter character :- ");
    scanf("%c", &x);
    if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
        printf("%c is Vowel", x);
    } else {
        printf("%c is Consonant", x);
    }
}

/*
 * Output :-
 * Enter character :- d
 * d is Consonant
 *
 */