// Print line by line Paragraph
#include<stdio.h>
int main() {
    char str[100];
    printf("Enter Paragraph :- \n");
    // terminated if first character
    // of input is 'q'
    while( gets(str) ) {
        if(str[0] == 'q') break;
        puts(str);
    }
}

/*

Outptut :-
Enter Paragraph :-
Hello
Hello
World!!!
World!!!
quit

*/