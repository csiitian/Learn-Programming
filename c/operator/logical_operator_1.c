#include<stdio.h>
int main() {

    // Example-1
    int num = 2;
    if(num >= 0 && num <= 5) {
        printf("%d is in range of [0,5]\n", num);
    } else {
        printf("%d is not in range of [0,5]\n", num);
    }

    // Example-2
    num = 10;
    if(num < 0 || num > 5) {
        printf("%d is not in range of [0,5]", num);
    } else {
        printf("%d is in range of [0,5]", num);
    }

}

/*

Output :-
2 is in range of [0,5]
10 is not in range of [0,5]

*/