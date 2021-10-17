#include<stdio.h>
int main() {

    // Example-1
    int num = 0;
    if(!num) {
        printf("%d is zero\n", num);
    } else {
        printf("%d is non-zero\n", num);
    }

    // Example-2
    num = 5;
    if(!num) {
        printf("%d is zero", num);
    } else {
        printf("%d is non-zero", num);
    }

}

/*

Output :-
0 is zero
5 is non-zero

*/
