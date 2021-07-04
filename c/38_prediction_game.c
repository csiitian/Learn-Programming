#include<stdio.h>
int main() {
    int num, predict = 53, count = 0;
    do {
        printf("Enter number :- ");
        scanf("%d", &num);
        count++;
        if(num == predict) {
            printf("You have Predicted in %d attemps\n", count);
        } else if(num < predict) {
            printf("too low\n");
        } else {
            printf("too high\n");
        }
    } while(num != predict);
}

/*

Output :-
Enter number :- 12
too low
Enter number :- 100
too high
Enter number :- 50
too low
Enter number :- 60
too high
Enter number :- 55
too high
Enter number :- 52
too low
Enter number :- 53
You have Predicted in 7 attemps

*/