#include<stdio.h>
#define VAL 32 
void main() {
	char arr[] = "geeksquiz";
	*(arr+0) &= ~32;
	*(arr+5) &= ~32;
	printf("%s",arr);
}
/*
Output : GeeksQuiz
It subtracts 32 .
*/
