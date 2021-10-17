#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main() {
    char str1[100],str2[100];
    printf("Enter first String :- ");
    gets(str1);
    printf("Enter second String :- ");
    gets(str2);
    int m = strlen(str1);
    int n = strlen(str2);
    int i=0;
    bool equal = true;
    if(m != n) { 
        // if both are different length
        equal = false;
    }
    while(equal && i < m && i < n) {
        if(str1[i] != str2[i]) {
            equal= false;
        }
        i++; // don't forget else you will run into infinite loop
    }
    if(equal) {
        printf("%s and %s are equal", str1, str2);
    } else {
        printf("%s and %s are not equal", str1, str2);
    }
}

/*

Test Case-1
Output :-
Enter first String :- Hello World!!!
Enter second String :- Hello Guys!!!
Hello World!!! and Hello Guys!!! are not equal

Test Case-2
Output :-
Enter first String :- Hello World!!!
Enter second String :- Hello World!!!
Hello World!!! and Hello World!!! are equal

*/