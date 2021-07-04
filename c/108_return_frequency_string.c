#include<stdio.h>
#include<string.h>
int freq_string(char *str, int len, char key) {
    int count = 0;
    for(int i=0;i<len;i++) {
        if(str[i] == key) {
            count += 1;
        }
    }
    return count;
}
int main() {
    char str[100];
    printf("Enter String :- ");
    gets(str);
    int len = strlen(str);
    char key;
    printf("Enter Key to find in Array :- ");
    scanf("%c", &key);
    int ret_freq = freq_string(str, len, key);
    printf("%c occurs %d times", key, ret_freq);
}

/*

Output :-
Enter String :- rockstar
Enter Key to find in Array :- r
r occurs 2 times

*/