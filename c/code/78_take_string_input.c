#include<stdio.h>
int main() {
    char str[50];
    printf("Enter String :- ");
    // scanf("%s", str); 
    // but scanf() can't take whitespace or newline
    // but you can use [^\n] this will tell compiler
    // terminate input by new line only 
    // scanf("%[^\n]", str); try this
    gets(str);
    // gets() can take whitespace in input
    printf("Entered String is :- %s", str);
    // puts(str);
}

/*

Output :-
Enter String :- Hello World!!!
Entered String is :- Hello World!!!

*/