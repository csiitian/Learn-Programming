#include<stdio.h>
int main() {
    int a,d,n;  
    printf("Enter a,d and n for arithemetic series :- ");
    scanf("%d%d%d", &a,&d,&n);
    int ans = a + (n-1)*d;
    printf("Nth term of given arithmetic series is :- %d",
            ans); 
}

/*

Output :-
Enter a,d and n for arithemetic series :- 1 2 5
Nth term of given arithmetic series is :- 9

Explanation :-
a = 1
d = 2
n = 5
1, 3, 5, 7, 9
so 5th term is 9

*/