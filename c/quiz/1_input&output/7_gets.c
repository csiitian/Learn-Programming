#include<stdio.h>
void main() {
	char str[10];
	gets(str);
	printf("%s",str);
}

/*

Input : Rocking Star
Output : Rocking Star

means gets(str) is risky because 
it doesn't do array boundation
check , so we use fgets(str,str_maxsize,stdin)
instead of gets(str)

*/
