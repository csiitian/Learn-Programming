#include<stdio.h>
int main() {
    char name[50];
    printf("Enter name :- ");
    gets(name); // take input
    int digit=0,vowel=0,consonant=0,space=0;
    int i = 0;
    while(name[i] != '\0') {
        if(name[i] == ' ') {
            space++;
        } else if(name[i] >= '0' && name[i] <= '9') {
            digit++;
        } else if((name[i] >= 'a' && name[i] <= 'z') ||
                    (name[i] >= 'A' && name[i] <= 'Z')) {
            switch(name[i]) {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                    vowel++;
                    break;
                default:
                    consonant++;
            }                
        }
        i++;
    }
    printf("No. of spaces = %d\n", space);
    printf("No. of vowels = %d\n", vowel);
    printf("No. of consonants = %d\n", consonant);
    printf("No. of digits = %d", digit);

}

/*
 * Output :-
 * Enter name :- rocky 1996
 * No. of spaces = 1
 * No. of vowels = 1
 * No. of consonants = 4
 * No. of digits = 4
 *
 */