#include<stdio.h>
int main() {
    
    // Example-1
    int a = 2, b = 5;
    if(a < b) {
        printf("%d is less than %d\n", a, b);
    } else {
        printf("%d is greater than %d\n", a, b);
    }

    // Example-2
    a = 5; // now a = 5 and b = 5
    if(a <= b) {
        printf("%d is less than or equal to %d", a, b);
    } else {
        printf("%d is greater than %d", a, b);
    }

}

/*

Output :-
2 is less than 5
5 is less than or equal to 5

*/