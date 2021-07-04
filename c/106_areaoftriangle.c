#include<stdio.h>
int main() {
    int base, height;
    printf("Enter base & height :- ");
    scanf("%d%d", &base, &height);
    double area = ( base * height ) / 2; 
    printf("Area is :- %lf", area);
    return 0;
}

/*
 * Output :-
 * Enter base & height :- 2 5
 * Area is :- 5.000000
 *
 */