#include<stdio.h>
void main() {
    int a = 97;
    printf("Initial Value of a = %d\n", a);
    printf("Post Increment (a++) :- %d\n", a++);
    a = 97;
    printf("Pre Increment (++a) :- %d\n", ++a);
    a = 97;
    printf("Post Decrement (a--) :- %d\n", a--);
    a  = 97;
    printf("Pre Decrement (--a) :- %d", --a);
}

/*

Output :-
Initial Value of a = 97
Post Increment (a++) :- 97
Pre Increment (++a) :- 98
Post Decrement (a--) :- 97
Pre Decrement (--a) :- 96

*/