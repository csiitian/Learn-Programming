#include<stdio.h>
int main() {
    int p, r, t;
    printf("Enter principle & rate & time :- ");
    scanf("%d%d%d", &p, &r, &t);
    double si = (p*r*t)/100.0; 
    printf("Simple Interest for %d rs/- for %d years "
    "at %d %% rate is :- %.2lf", p, r, t, si);
    // to print % in printf you need %% 
    return 0;
}

/*
 * Output :-
 * Enter principle & rate & time :- 200 2 1
 * Simple Interest for 200 rs/- for 2 years at 1 % rate is :- 4.00
 *
 */