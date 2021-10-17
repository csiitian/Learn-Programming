#include<stdio.h>
int main() {
    int num;
    printf("Enter number :- ");
    scanf("%d", &num);
    int temp = num;
    int sum = 0;
    while(temp > 0) {
        temp = temp/10;
        sum = sum + temp;
    }
    printf("Sum of digits in %d is %d", num, sum);
}

/*

Output :-
Enter number :- 291
Sum of digits in 291 is 12

Explanation :- 
2 + 9 + 1 = 12
so sum is 12

 */