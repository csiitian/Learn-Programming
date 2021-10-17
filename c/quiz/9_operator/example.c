#include<stdio.h>
#include<string.h>
int countChar(char string[],char c) {
 	int i=0,count=0;
 	while(string[i] != '\0') {
 		if(string[i++] == c) count++;	
	}
	return count;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		char s[100000];
		char p[100000];	
		scanf("%s",s);
		scanf("%s",p);
		char i = 'a';
		for(;i<='z';i++) {
			int char_in_s = countChar(s,i);
			int char_in_p = countChar(p,i);
			int j = 0;
			for(;j<(char_in_s - char_in_p);j++) {
				printf("%c",i);
			}
			if(p[0] == i) {
				printf("%s",p);
			}
		} 
		printf("\n");
	}
}
