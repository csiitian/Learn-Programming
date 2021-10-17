#include<stdio.h>
int main() {
    int a,d,n;  
    printf("Enter a,d and n for arithemetic series :- ");
    scanf("%d%d%d", &a,&d,&n);
    float sum = (n/2.0)*(2*a + (n-1)*d);
    printf("Sum upto n for given arithmetic series is :- %.2f",
            sum); 
}

/*

Output :-
Enter a,d and n for arithemetic series :- 1 2 5
Sum upto n for given arithmetic series is :- 25.00

Explanation :-
a = 1
d = 2
n = 5
1 + 3 + 5 + 7 + 9
so sum upto 5th term is 25

*/