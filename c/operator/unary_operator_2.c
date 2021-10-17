#include<stdio.h>
void main() {
    int a = 97;
    printf("Initial Value of a = %d\n", a);
    printf("( Post Increment ) a = %d\n", a++);
    // now a = 98
    printf("( Pre Increment ) a = %d\n", ++a);
    // now a = 99
    printf("( Post Decrement ) a = %d\n", a--);
    // now a = 98
    printf("( Pre Decrement ) a = %d\n", --a);
    // now a = 97
    printf("Final Value of a = %d", a);
}

/*

Output :-
Initial Value of a = 97
( Post Increment ) a = 97
( Pre Increment ) a = 99
( Post Decrement ) a = 99
( Pre Decrement ) a = 97
Final Value of a = 97

*/