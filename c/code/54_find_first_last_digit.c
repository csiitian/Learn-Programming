#include<stdio.h>
int main() {
    int num;
    printf("Enter number :- ");
    scanf("%d", &num);
    int last_digit = num%10;
    int temp = num;
    while(temp >= 10) {
        temp = temp/10;
    }
    int first_digit = temp;
    printf("First Digit is %d and Last Digit is %d in %d",
            first_digit, last_digit, num);
}

/*

Output :-
Enter number :- 23879
First Digit is 2 and Last Digit is 9 in 23879

*/