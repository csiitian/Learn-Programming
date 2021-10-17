#include<stdio.h>
int main() {

    int num1 = 4, num2 = 5;
    // 4 = 100
    // 5 = 101

    // Bitwise AND
    int bitwise_and = num1 & num2;

    // Bitwise OR
    int bitwise_or = num1 | num2;

    // Bitwise XOR
    int bitwise_xor = num1 ^ num2;

    printf("(Bitwise AND) %d & %d = %d\n", 
                num1, num2, bitwise_and);
    printf("(Bitwise OR) %d | %d = %d\n", 
                num1, num2, bitwise_or);
    printf("(Bitwise XOR) %d ^ %d = %d", 
                num1, num2, bitwise_xor);

}

/*

Output :-
(Bitwise AND) 4 & 5 = 4
(Bitwise OR) 4 | 5 = 5
(Bitwise XOR) 4 ^ 5 = 1

*/