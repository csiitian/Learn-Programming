#include<stdio.h>
int count_digit(int num) {
    if(num <= 0) return 0;
    return 1 + count_digit(num/10);
}
int main() {
    int num, count;
    printf("Enter number :- ");
    scanf("%d", &num);
    if(num == 0) count = 1;
    else count = count_digit(num);
    printf("Number of digits in %d is %d", num, count);
}

/*

Test Case-1
Output :-
Enter number :- 127623
Number of digits in 127623 is 6

Test Case-2
Output :-
Enter number :- 0
Number of digits in 0 is 1

*/