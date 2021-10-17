#include<stdio.h>
int main() {
    int rad;
    printf("Enter radius :- ");
    scanf("%d", &rad);
    double area = 22.0/7 * rad * rad;
    double circm = 2 * 22.0/7 * rad;
    printf("Area is :- %lf\n", area);
    printf("Circumference is :- %lf\n", circm);
    return 0;
}

/*
 * Output :-
 * Enter radius :- 1
 * Area is :- 3.141593
 * Circumference is :- 6.283185
 * 
 */