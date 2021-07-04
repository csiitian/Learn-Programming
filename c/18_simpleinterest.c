#include<stdio.h>
int main() {
    int principle, rate, time;
    printf("Enter principle & rate & time :- ");
    scanf("%d%d%d", &principle, &rate, &time);
    double si = ( principle * rate * time ) / 100; 
    printf("Simple Interest for %d rs/- for %d years "
    "at %d %% rate is :- %lf", principle, rate, time, si);
    // to print % in printf you need %% 
    return 0;
}

/*
 * Output :-
 * Enter principle & rate & time :- 200 2 1
 * Simple Interest for 200 rs/- for 2 years at 1 % rate is :- 4.000000
 *
 */