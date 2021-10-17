#include<stdio.h>
int main() {
    int num;
    printf("Enter number :- ");
    scanf("%d", &num);
    int last_digit = num%10;
    int temp = num;
    int count = 1;
    while(temp >= 10) {
        temp = temp/10;
        count = count*10;
    }
    int first_digit = temp;
    int ans = count*(last_digit-first_digit) + (first_digit-last_digit) + num;
    printf("After swapping first and last digit %d is %d",
            num, ans);
}

/*

Output :-
Enter number :- 23879
90000 + 23879 - 20000 + 2 - 9
90000 - 20000 + 2 - 9 + 23789
93879
After swapping first and last digit 23789 is 93782

*/