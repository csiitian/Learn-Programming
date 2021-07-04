#include<stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter three numbers :- ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if(num1 > num2) {
        // since num1 > num2
        // if num1 > num3 so num1 is greatest
        // else num3 > num1 so num3 is greatest
        if(num1 > num3) {
            printf("%d is greatest", num1);
        } else {
            printf("%d is greatest", num3);
        }
    } else {
        // since num2 > num1
        // if num2 > num3 so num2 is greatest
        // else num3 > num2 so num3 is greatest 
        if(num2 > num3) {
            printf("%d is greatest", num2);
        } else {
            printf("%d is greatest", num3);
        }
    }
}

/*
 * Output :-
 * Enter three numbers :- 12 57 22
 * 57 is greatest
 *
 */