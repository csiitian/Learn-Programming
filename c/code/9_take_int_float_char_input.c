#include<stdio.h>
int main() {
    int a;
    char b;
    float c;
    printf("Enter Integer, Character and Floating Number :- ");
    scanf("%d", &a);
    // As we enter an integer value and hit enter
    // to read next value, compiler stores either 
    // enter or null into the string’s first 
    // character and string input terminates.
    // we can't take char or string followed by integer
    // so we just make garbage scanf to escape one input
    int temp;
    scanf("%d", &temp); // escaping input after integer
    scanf("%c", &b);
    scanf("%f", &c);
    printf("Input is :- %d, %c and %.2f", a, b, c);
    // .2f is for rounding off to two decimal place
}

/*
 * Output :-
 * Enter Integer, Character and Floating Number :- 121 g 128.12
 * Input is :- 121, g and 128.12
 *
 */