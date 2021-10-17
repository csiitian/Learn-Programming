#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    printf("Enter String :- ");
    scanf("%s", str);
    // total 256 unicode characters
    int count[256] = {0};
    int i=0;
    while(str[i] != '\0') {
        // char to ascii
        count[str[i]]++;
        i++;
    }
    printf("Frequency :- \n");
    for(int i=0;i<256;i++) {
        if(count[i] != 0) {
            // ascii to char
            printf("%c -> %d\n", i, count[i]);
        }
    }
}

/*

Output :-
Enter String :- RockStar
Frequency :-
R -> 1
S -> 1
a -> 1
c -> 1
k -> 1
o -> 1
r -> 1
t -> 1

*/