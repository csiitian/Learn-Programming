#include<stdio.h>
int count(char *str1) {
	char *str2 = str1;
	while(*++str1);
	return str1-str2;
}
void main() {
	char *str = "Vikas Singh";
	printf("%d",count(str));
}

/*
Output : 11(length of string)
*/
