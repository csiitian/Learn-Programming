#include<stdio.h>
int main() {
    int num;
    printf("Enter number :- ");
    scanf("%d", &num);
    int count[10] = {0}; // 0 to 9
    int temp = num;
    while(temp > 0) {
        int last_digit = temp%10;
        count[last_digit]++;
        temp = temp/10;
    }
    printf("Frequency :- \n");
    for(int i=0;i<10;i++) {
        if(count[i] != 0) {
            printf("%d -> %d\n", i, count[i]);
        }
    }
}

/*

Output :-
Enter number :- 2398012
Frequency :-
0 -> 1
1 -> 1
2 -> 2
3 -> 1
8 -> 1
9 -> 1

*/