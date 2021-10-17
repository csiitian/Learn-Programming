#include<stdio.h>
int top = 0;
int fun1() {
	char a[] = {'a','b','c','(','d'};
	return a[top++];
}
void main() {
	char b[10];
	char ch;
	int i = 0;
	while(ch = fun1() != '(') {
		b[i++] = ch;
	}
	printf("%s",b);
}
/*
Output : 3 special character which ascii value is 1
while((ch = fun1()) != '(')
*/
