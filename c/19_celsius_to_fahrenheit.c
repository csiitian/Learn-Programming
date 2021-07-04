#include<stdio.h>
int main() {
    float c;
    printf("Enter temperature in celsius :- ");
    scanf("%f", &c);
    float f = (9.0/5)*c + 32;
    printf("temperature in fahrenheit is : %.2f", 
            f);
}

/*

formula :- 
f = (9/5)*c + 32
c  = (5/9)*(f-32)

Output :-
Enter temperature in celsius :- -40
temperature in fahrenheit is : -40.00

*/