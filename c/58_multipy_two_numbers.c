#include<stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers :- ");
    scanf("%d%d", &a, &b);
    if(a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    // now a < b
    int prod = 0;
    for(int i=0;i<a;i++) {
        prod = prod + b;
    }
    printf("%d * %d = %d", a, b, prod);
}

/*

Output :-
Enter two numbers :- 9 5
5 * 9 = 45

*/