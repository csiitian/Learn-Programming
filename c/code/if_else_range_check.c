#include<stdio.h>
int main() {
    int num;
    printf("Enter number :- ");
    scanf("%d", &num);
    if(num <= 5) {
        printf("5");
    } else if(num <= 25) {
        printf("25");
    } else if(num <= 125) {
        printf("125");
    } else {
        printf("625");
    }
}