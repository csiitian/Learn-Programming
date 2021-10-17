#include<stdio.h>
void main() {
	int i = 3;
	printf("%d",(++i)++);
}

/*
Compilation error 
left value not found for
post increment 
*/
