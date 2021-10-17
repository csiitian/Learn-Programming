#include<stdio.h>
#include<math.h>
int main() {
    int num;
    printf("Enter number :- ");
    scanf("%d", &num);
    // armstrong number is num for which 
    // sum of cube of each digit is equal to num
    int sum = 0;
    int temp = num;
    while(temp > 0) {
        int last_digit = temp%10;
        sum += last_digit*last_digit*last_digit;
        temp = temp/10;
    }
    if(num == sum) {
        printf("%d is armstrong number", num);
    } else {
        printf("%d is not armstrong number", num);
    }
}

/*
 * Output :-
 * Enter number :- 153
 * 153 is armstrong number
 * 
 * Explanation :-
 * 1^3 + 5^3 + 3^3
 * 1 + 125 + 27
 * 153 = 153
 * 
 */