#include<stdio.h>
int main() {
    int a = 3; // assignment operator
    printf("a = %d\n", a);
    
    a += 2; // a = a + 2
    // now a = 5
    printf("(+=2) a = %d\n", a);
    
    a -= 2; // a = a - 2
    // now a = 3
    printf("(-=2) a = %d\n", a);

    a *= 2; // a = a * 2
    // now a = 6
    printf("(*=2) a = %d\n", a);

    a /=2 ; // a = a / 2
    // now a = 3
    printf("(/=2) a = %d\n", a);

    a %=2 ; // a = a % 2
    // now a = 1
    printf("(%%=2) a = %d", a);

}

/*

Output :-
a = 3
(+=2) a = 5
(-=2) a = 3
(*=2) a = 6
(/=2) a = 3
(%=2) a = 1

*/