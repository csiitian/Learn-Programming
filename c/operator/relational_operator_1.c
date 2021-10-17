#include<stdio.h>
int main() {
    
    // Example-1
    int a = 5, b = 2;
    if(a == b) {
        printf("%d is equal to %d\n", a, b);
    } else {
        printf("%d is not equal to %d\n", a, b);
    }

    // Example-2
    b = 5; // now a = 5 and b = 5
    if(a == b) {
        printf("%d is equal to %d", a, b);
    } else {
        printf("%d is not equal to %d", a, b);
    }

}

/*

Output :-
5 is not equal to 2
5 is equal to 5

*/