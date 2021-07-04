#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    printf("Enter String :- ");
    scanf("%s", str);
    int len = strlen(str);
    int val = 0, i = len-1, pow = 1;
    while(i >= 0) {
        int digit = str[i] == '0' ? 0 : 1;
        // if(str[i] == '0') digit = 0;
        // else digit = 1;
        val = val + pow*digit;
        pow = pow*2; 
        i--;
    }
    printf("%s -> %d", str, val);
}

/*

Test Case-1
Output :-
Enter String :- 1111
1111 -> 15

Test Case-2
Output :-
Enter String :- 101
101 -> 5

*/