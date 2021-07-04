#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    printf("Enter String :- ");
    gets(str);
    int len = strlen(str);
    for(int i=0;i<len/2;i++) {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    printf("After Reversing String :- ");
    puts(str);
}

/*

Output :-
Enter String :- Hello World!!!
After Reversing String :- !!!dlroW olleH

*/