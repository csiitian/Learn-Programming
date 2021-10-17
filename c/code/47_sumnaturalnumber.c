/*
 * Problem Statement :- Sum of All Natural Numbers upto n
 * 
 */
#include<stdio.h>
int main() {
    int n;
    printf("Enter value of n :- ");
    scanf("%d", &n);
    // initial sum is 0
    long sum = 0;
    for(int i=1;i<=n;i++) {
        sum = sum + i;
    }
    printf("Sum upto %d is %ld", n, sum);
}

/*
 * Output :-
 * Enter value of n :- 5
 * Sum upto 5 is 15
 *
 */