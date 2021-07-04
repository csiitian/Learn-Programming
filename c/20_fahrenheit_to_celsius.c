#include<stdio.h>
int main() {
    float f;
    printf("Enter temperature in fahrenheit :- ");
    scanf("%f", &f);
    float c = (5.0/9)*(f-32);
    printf("temperature in celsius is : %.2f", 
            c);
}

/*

formula :- 
f = (9/5)*c + 32
c  = (5/9)*(f-32)

Output :- 
Enter temperature in fahrenheit :- -40
temperature in celsius is : -40.00

*/