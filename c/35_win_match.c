#include<stdio.h>
int main() {
    int score_a, score_b;
    printf("Enter Team-a score :- ");
    scanf("%d", &score_a);
    printf("Enter Team-b score :- ");
    scanf("%d", &score_b);
    int lead = score_a - score_b;
    if(lead > 0) {
        printf("Team-a won the match by %d runs", 
            lead);
    } else if(lead == 0) {
        printf("Draw Match !!!");
    } else {
        printf("Team-b won the match by %d runs", 
            -lead);
    }
}
/*

Test Case-I
Output :- 
Enter Team-a score :- 160
Enter Team-b score :- 165
Team-b won the match by 5 runs

Test Case-II 
Output :-
Enter Team-a score :- 180
Enter Team-b score :- 100
Team-a won the match by 80 runs

Test Case-III
Output :-
Enter Team-a score :- 165
Enter Team-b score :- 165
Draw Match !!!

*/