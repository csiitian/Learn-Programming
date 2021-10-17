#include<stdio.h>
#include<string.h>
void strconcat(char *a,char *b) {
	int len_a = strlen(a);
	int len_b = strlen(b);
	int i;
	for(i=0;i<len_b;i++) {
		a[len_a + i] = b[i];
	}
} 
void main() {
	char str1[20] = "Hello";
	char *str2 = "World!!!"; 
	char *str3 = " World!!!";
	strconcat(str1,str2);
	printf("%s\n",str1);
	printf("%s",str2);
}

/*
Output :
HelloWorld!!!
World!!!
*/
